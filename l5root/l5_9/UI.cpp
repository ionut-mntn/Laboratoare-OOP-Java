
#include <iostream>
#include <exception>
#include <windows.h>

#include "UI.h"

using std::cin;
using std::cout;
using std::cerr;
using std::exception;

UI::UI(Controller c)
{
	contr = c;
}

Controller& UI::getController()
{
	return contr;
}


void UI::ask_get(string mesaj, int &value)
{
	cout << '\n';
	cout << mesaj << ": ";
	cin >> value; cin.get();  // citesc 1 caracter ca sa nu ramana "trailing" in buffer si sa ma incurce la alte eventuale citiri cu `cin`
}

void UI::ask_get(string mesaj, char& value)
{
	cout << '\n';
	cout << mesaj << ": ";
	cin >> value; cin.get(); // citesc caracterul ca sa nu ramana "trailing" in buffer si sa ma incurce la alte eventuale citiri cu `cin`
}

void UI::ask_get(string mesaj, string& value)
{
	cout << '\n';
	cout << mesaj << ": ";
	// cin.get();
	getline(cin, value);

	//cin >> value;

	// cout << "in functie boss; acesta:" << value << "este caracterul" << '\n';
	// if (value == "\n") cout << "DAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAaa\n";
}

void UI::wrong_option_screen()
{
	cout << "Please enter one of the numbers corresponding to the options!!\n";
}

void UI::generic_error_msg(exception& e)
{
	cerr << "===EROARE===\n";	// cerr scrie intr un stream separat de cout; in cazul nostru, coincide stream urile, tho
	cerr << e.what() << '\n';
	cerr << "===============\n";
	cout << '\n';
}

void UI::select_mode_screen()
{
	cout << "Select mode:\n"
		<< "1.Administrator\n"
		<< "2.User\n"
		<< "0.Exit\n";
}

void UI::run()
{
	int mode;
	vector<Movie> user_watchlist;
	
	while (true)
	{
		select_mode_screen();
		ask_get("mode", mode);
		switch (mode)
		{
			case 1:
			{
				execute_amo();
				break;
			}
			case 2:
			{
				execute_umo();
				break;
			}
			case 0:
			{
				cout << "Exiting...\n See you soon!";
				return;
			}
			default: { wrong_option_screen(); break; }
		}
	}
}
	

void UI::ask_get_ma(string &id, string &title, string &genre, int &year, int &likes, string &trailer)
{
	ask_get("id", id);
	ask_get("title", title);
	ask_get("genre", genre);
	ask_get("year", year);
	ask_get("likes", likes);
	validation_screen(year, likes);
	ask_get("trailer", trailer);
}

void UI::invalid_screen(const string &token, const string & low_boundary, const string& high_boundary)
{
	cout << "Invalid value for "
		<< token.c_str() << "! Must NOT be between: "
		<< low_boundary << " and " << high_boundary << '\n';
}

void UI::invalid_screen(const string &token, const int &low_boundary, const int &high_boundary)
{
	cout << "Invalid value for "
		<< token.c_str() << "! MUST be between: " 
		<< low_boundary << " and " << high_boundary << '\n';
}

void UI::invalid_screen(const string& token, const int& low_boundary)
{
	cout << "Invalid value for "
		<< token.c_str() << "! MUST be higher than: "
		<< low_boundary << '\n';
}

void UI::invalid_screen(const string& token)
{
	cout << "Invalid value for "
		<< token.c_str();
}

void UI::validation_screen(string& id) // daca nu pasez nimic voi verifica daca 
{
	cout << "Checking integrity of data...\n";

	vector<string> ids_list = contr.getRepo().getIds();
	int l = ids_list.size();

	bool changed = false;
	//if (id != "") // daca vreau sa verific daca 
	//{
		while (validator.id_exists(id, ids_list))
		{
			changed = true;
			invalid_screen("id", ids_list[0], ids_list[l - 1]);
			cout << "Re-enter!\n";
			ask_get("id", id);
		}
	//}
	//else
	//{
		//while (validator.validate_id(id, ids_list))
		/*{
			changed = true;
			invalid_screen("id", ids_list[0], ids_list[l - 1]);
			cout << "Re-enter!\n";
			ask_get("id", id);
	}*/
	if (changed) cout << "Finished validation.";
	cout << "Data has valid values!\n";

}

void UI::validation_screen(int& year, int& likes)
{
	cout << "Checking integrity of data...\n";

	bool changed = false;
	while (!validator.validate_year(year))
	{
		changed = true;
		invalid_screen("year", validator.lowest_year, validator.highest_year);
		cout << "Re-enter!\n";
		ask_get("year", year);
	}
	
	while (!validator.validate_likes(likes))
	{
		changed = true;
		invalid_screen("likes", validator.lowest_likes);
		cout << "Re-enter!\n";
		ask_get("likes", likes);
	}

	/* //am comentat validarea URL urilor pentru ca ar fi durat destul de 
	// mult in cazul in care dati `copy` la un URL dar nu puteti da `paste` in terminat
	while(!validator.validate_trailer(trailer))
	{
		changed = true;
		invalid_screen("trailer");
		cout << "Re-enter!\n";
	}
	*/

	if (changed) cout << "Finished validation.";
	cout << "Data has valid values!\n";
}

/*
void UI::validation_screen(string &id, int &year, int &likes)
{
	cout << "Checking integrity of data...\n";

	vector<string> ids_list = contr.getRepo().getIds();
	int l = ids_list.size();
	
	bool changed = false;
	while (!validator.validate_id(id, ids_list))
	{
		changed = true;
		invalid_screen("id", ids_list[0], ids_list[l - 1]);
		cout << "Re-enter!\n";
		ask_get("id", year);
	}

	while (!validator.validate_year(year))
	{
		changed = true;
		invalid_screen("year", validator.lowest_year, validator.highest_year);
		cout << "Re-enter!\n";
		ask_get("year", year);
	}

	while (!validator.validate_likes(likes))
	{
		changed = true;
		cout << "likes = " << likes << '\n';
		invalid_screen("likes", validator.lowest_likes);
		cout << "Re-enter!\n";
		ask_get("likes", likes);
	}

	/* //am comentat validarea URL urilor pentru ca ar fi durat destul de
	// mult in cazul in care dati `copy` la un URL dar nu puteti da `paste` in terminat
	while(!validator.validate_trailer(trailer))
	{
		changed = true;
		invalid_screen("trailer");
		cout << "Re-enter!\n";
	}
	

	if (changed) cout << "Finished validation.";
	cout << "Data has valid values!\n";
}
*/

void UI::execute_amo()
{
//	vector<Movie>& list = contr.getRepo().getList();

	string id, title, genre, trailer;
	int year, likes;
	int option;


	while (true)
	{
		admin_menu_screen();
		ask_get("option", option);
		switch (option)
		{
			case 1:
			{
				ask_get_ma(id, title, genre, year, likes, trailer);
				// validation_screen(id, year, likes);
				validation_screen(id);
				validation_screen(year, likes);
				try 
				{ 
					Movie m(id, title, genre, year, likes, trailer);
					contr.getRepo().add(m);
					success_msg("added");
				}
				catch (exception& e)
				{
					generic_error_msg(e);
					admin_menu_screen();
				}
				break;
			}
			case 2:
			{
				string old_id;
				ask_get("id (of movie to be replaced)", old_id);

				validation_screen(old_id);

				ask_get_ma(id, title, genre, year, likes, trailer);
				validation_screen(year, likes);
				Movie new_movie(id, title, genre, year, likes, trailer);
				validation_screen(year, likes);
				try
				{
					contr.getRepo().edit(old_id, new_movie, 1);
					success_msg("edited");
				}
				catch (exception& e)
				{
					generic_error_msg(e);
				}
				break;
			}
			case 3:
			{
				string id_toDelete;
				ask_get("id (of movie to be deleted)", id_toDelete);
				//cout << "AICI DC NU MERGE? old_id == " << id_toDelete << '\n';
				try
				{
					contr.getRepo().del(id_toDelete, 1);
					success_msg("deleted");
				}
				catch (exception& e)
				{
					generic_error_msg(e);
				}
				break;
			}
			case 4:
			{
				//contr.getRepo().toString(1);
				cout << contr.getRepo().get_ref(1) << '\n';
				break;
			}
			case 0:
			{
				// clear();
				go_back_screen();
				return;
			}
			default:
			{
				wrong_option_screen();
				break;
			}
		}
	}
}

void UI::afis_lista(const int &option)
{
	vector<Movie>& list = contr.getRepo().get_ref(option); // e un pic gresit ce e aici!!
	cout << "Your current watchlist is:\n";
//	cout << "22222:\n" << list << '\n';
	if (!list.size()) { cout << "Your watch list is empty at the moment!\n"; return; }
/*
	int l = watchlist.size();
	for (int i = 0; i < l; i++)
		cout << watchlist[i] << '\n';
	cout << '\n';
*/
	cout << list << '\n';
}
void UI::one_by_one_screen()
{
	//
	string genre;
	cout << " (leave blank to view all movie trailers)\n";
	ask_get("genre", genre);
	//

	string mesaj = "( \"y\" = yes / \"n\" = no / \"e\" = exit) option";
	char yne; // yes / no / exit 
	
	//
	vector<Movie>& genre_list = contr.getRepo().generateUserWatchlist(genre);
	int l = genre_list.size();
	//
	for(int i = 0; i < l; i++)
	{
		//
		cout << genre_list[i] << '\n';
		//
		cout << "-----Check trailer open in Internet browser!-----\n"
			<< "we kindly ask you to wait while the browser is being open\n";
		//
		string aux1 = '"' + genre_list[i].getTrailer() + '"';
		//
		ShellExecute(NULL, "open",
			aux1.c_str(),	// convertesc la `const char*` (asa cere functia `ShellExecute`) adica LPSWTR
			NULL, NULL, SW_SHOWNORMAL);

		cout << (" Do you like this trailer? Would you like to add the movie to your watch list ?\n");
		ask_get(mesaj, yne);
		
		switch(yne)
		{
			case 'y':
			{
//				watchlist.push_back(aux[i]);
				/////////////////////////////////////////////////////////////////////////////////////
				try
				{
					contr.getRepo().add(genre_list[i], 2);
				}
				catch (exception &e)
				{
					//cerr << e.what() << '\n';
					generic_error_msg(e);
				}
				break;
			}

			case 'n':
				break;
			case 'e':
				return ;
		}
	}
}

//void UI::execute_umo(vector<Movie>& own_list)
void UI::execute_umo()
{
	//vector<Movie>& watchlist = contr.getRepo().getWatchlist();
	vector<Movie>& watchlist = contr.getRepo().getUserWatchlist();

	int option;
	while (true)
	{
		user_menu_screen();
		ask_get("option", option);
		switch (option)
		{
			case 1:
			{
				cout << "Please check file database so that you do not misspell any genre!\n"
					<< " Any genre shall be typed in precisely as in the database!\n";
				
				/*
				string genre;
				cout << " (leave blank to view all movie trailers)\n";
				ask_get("genre", genre);
				
				vector<Movie> aux = contr.getRepo().generateUserGenreList(genre);
				*/

				one_by_one_screen();
				//cout << contr.getRepo().getList(2);
				//cout << contr.getRepo().getUserWatchlist() << '\n';
				// cout << "AICIaaaaaaaaaaaaaaaaaaaa\n";
				// afis_lista(1);
				afis_lista(2);
				
				//contr.getRepo().toString(2);
				// cout << contr.getRepo().getList(2) << '\n';
				break;
			}
			case 2:
			{
				//afis_lista(own_list);
				//cout << contr.getRepo().getList(2) << '\n';
				//vector<Movie>& watchlist = contr.getRepo().getUserWatchlist();
				//cout << watchlist << '\n';
				if (!watchlist.size())
		//		{
				afis_lista(2);				// incearca cu try except aici !!
			//		cout << '\n';

				if (!watchlist.size()) break;
				//}
				string id;
				ask_get("id (of movie to be deleted)", id);
				try
				{
// comentat aici
/*
					int l = own_list.size();
					for (int i = 0; i < l; i++)
					{
						if (own_list.at(i).getID() == id)
						{
							own_list.erase(own_list.begin() + i); 
							break;
						}
					}
*/

					//contr.getRepo().del(watchlist, id);
					// contr.getRepo().del(id, 1);
					contr.getRepo().del(id, 2);
					
					char c;
					cout << "Did you enjoy the movie?(answering yes will increment the number of likes for that movie)\n";
					ask_get("(\"y\" = yes / \"n\" = no / \"e\" = exit)\n option", c);
					switch (c)
					{
					case 'y':
					{
//						vector<Movie>& watchlist = contr.getRepo().getUserWatchlist();
						cout << "aiciiii:\n";
						cout << watchlist << '\n';
						cout << "pana aiciii\n";
						vector<Movie>& list = contr.getRepo().getList();
						int poz = contr.getRepo().exists(list, id); 
						// verific daca exista ca sa obtin pozitia
						cout << "poz =" << poz << '\n';
						int nr_likes = list.at(poz).getLikes();
						list.at(poz).setLikes(++nr_likes); // incrementez numarul de like uri
						
						cout << "Number of likes successfully incremented!\n";
					}
					case 'n': break;
					}
				}
				catch (exception& e)
				{
					cerr << e.what();
					cout << "(Maybe check id ?)\n";
				}
				break;
			}
			case 3:
			{/////////////////////////////////////////////////////////////////////////////////////////
				// cout << contr.getRepo().getList(2) << '\n';
				afis_lista(2);
				break;
			}
			case 0:
			{
				// clear();
				go_back_screen();
				return;
			}
			default:
			{
				wrong_option_screen();
				break;
			}
		}
	}
}

void UI::admin_menu_screen()
{
	cout << "===ADMIN MAIN MENU===\n";
	cout << "0. Go back\n"
		<< "1. Add movie\n"
		<< "2. Update Movie\n"
		<< "3. Delete movie\n"
		<< "4. Display movies\n\n";
	
}

void UI::user_menu_screen()
{
	cout << "===USER MAIN MENU===\n"
		<< "0. Go back\n"
		<< "1. View movies by specified genre\n"
		<< "2. Delete movie from own watchlist\n"
		<< "3. Display own list\n";
	cout << '\n';
}

void UI::go_back_screen()
{
	cout << "Going back...\n";
	cout << '\n';
}

void UI::success_msg(const string& state)
{
	cout << "Movie successfully " << state << " in the respective list!\n";
}

// void UI::clear(){ cout << "\x1B[2J\x1B[H"; }
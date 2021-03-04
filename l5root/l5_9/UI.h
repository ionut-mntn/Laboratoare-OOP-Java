#pragma once
#include <iostream>
#include <exception>
#include "Controller.h"
#include "Validator.h"

using std::ostream;
using std::exception;

class UI
{
private:
	
	Controller contr;

	Validator validator;

	void clear();

	/* Prints the movies in a list */
	void afis_lista(const int& option);


	/* ask for & get different inputs from user */
	void ask_get(string mesaj, int& var);
	void ask_get(string mesaj, string& var);
	void ask_get(string mesaj, char &c);
	void ask_get_ma(string& id, string& title, string& genre, int& year, int& likes, string& trailer);
	

	/* Display specific data validation messages */
	void invalid_screen(const string&, const string&, const string&);
	void invalid_screen(const string&, const int&, const int&);
	void invalid_screen(const string&, const int&);
	void invalid_screen(const string&);

	/* Display specific data validation messages */
	void validation_screen(string &id);
	void validation_screen(int &year, int &likes );
	// void validation_screen(string &id, int &year, int &likes);

	/* Display feedback messages */
	void wrong_option_screen();
	void generic_error_msg(exception&);
	void success_msg(const string&);

	/* Basic GUI messages with options & enquiries happening are being handled at the moment */
	void select_mode_screen();
	void admin_menu_screen();
	void user_menu_screen();
	void go_back_screen();
	void one_by_one_screen();
	void edit_screen();

	/*  */
	void execute_amo(); // execute Admin Menu Option
	void execute_umo(); // xecute User Menu Option
	
public:

	/* Constructor */
	UI(Controller c = Controller() );

	/* Getter atribut `contr` */
	Controller& getController();

	/* The main menu of the GUI */
	void run();
};
#include <iostream>
//#include "imgui.h"
#include <sqlite3.h>


int check_error(int exit, char* messageError){
	if (exit != SQLITE_OK){
		std::cerr << "Error" << '\n';
	}
	else{
		std::cout << "No error performing operation." << '\n';
	}
}



int main() {
	sqlite3* DB;
	int exit = 0;
	exit = sqlite3_open("example.db", &DB);
	char* messageError;

	string sql_query = "CREATE TABLE test(id int primary key not null autoincrement,name text, surname text);";
	exit = sqlite3_exec(DB,sql_query.c_str(),NULL,0,&messageError);
	check_error(exit, messageError);

	

	return 0;

}

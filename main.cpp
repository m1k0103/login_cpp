#include <iostream>
#include <sqlite3.h>
using namespace std;

// &x = the address of x
// *y = the value at the address y	 (aka a pointer)


sqlite3* db;


void openDB(char* filename, sqlite3* database){
	int opened = sqlite3_open(filename, &database);
	if (opened){
		cout << "Database couldnt be opened %s \n" << sqlite3_errmsg(database);
	}else{
		cout << "Opened successfully \n";
		db = database;
	}
}

void createTable(char* filename, sqlite3* database){
	int opened = sqlite3_open(filename, &database);
	sqlite3_exec(); // carry on from here please
}


int main() {
	char* filename = "database.db";
	openDB(filename, db);

	createTable();

	sqlite3_close(db);
}

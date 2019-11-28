#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string name;
	int age;
	cout << "Enter your name: ";
	cin >> name;
	cout << "\nEnter your age: "; 
	cin >> age;
		
	fstream database;
	database.open("database.txt", ios::out);
	if (database)
		{
			cout << "\nfile created";
			database << name <<endl;
			database << age;
		}
	else
		cout << "error";

	database.close();

	database.open("database.txt", ios::in);
	if (database)
	{
		cout << "\n reading from file" << endl;
		database >> name >> age;
		cout << name << endl << age;
		
	}
	else
		cout << "error";

	
	
	

}


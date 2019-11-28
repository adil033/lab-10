#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int sum = 0;
	fstream myfile;
	myfile.open("filehand.txt", ios::out);
	
	cout << "Retrieved array is: ";
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		myfile << arr[i] << " ";
	}
	
	myfile.close();

	myfile.open("filehand.txt", ios::in);
	for (int i = 0; i < 5; i++)
	{
		myfile >> arr[i];
		cout << arr[i];
		
	}

	myfile.close();

	myfile.open("filehand.txt", ios::app);
	for (int i = 0; i < 5; i++)
	{
		sum = sum + arr[i];
	}

	myfile << "The Sum is " << sum;
	cout << "The Sum is " << sum;

	
}
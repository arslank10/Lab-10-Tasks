// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string line;
	string name;
	int age;
	ofstream fout("t2.txt");
	ifstream fin("t2.txt");
	if (fout.is_open())
	{
		cout << "Writing to the file: " << endl;
		cout << "Enter your name: ";
		getline(cin, name);
		cout << "Enter your age: ";
		cin >> age;
		fout << name<<endl;
		fout << age;
		fout.close();
	}
	else
	{
		cout << "Error";
	}
	cout << "Reading from the file:"<<endl;
	cout << name<<endl;
	cout << age << endl;

	


}

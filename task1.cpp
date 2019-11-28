// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream myfile("t1.txt", ios::out);
	string line;
	int sum=0;
	int arr[5] = { 2,3,4,5,6 };
	if (myfile)
	{
		for (int i = 0; i <= 5; i++) {
			myfile << arr[i]<<" ";
			sum += arr[i];
			
		}
		cout << "Writing arrays elements";
		
		myfile.close();
		
	}
	else
	{
		cout << "Error";
	}
	fstream myfile("t1.txt", ios::in);
	cout << "The retrieved array is :"<<endl;
	while (!myfile.eof())
	{
		getline(myfile, line);
		cout << line << endl;
	}
	myfile.close();
	myfile.open("t1.txt", ios::app);
	if (myfile) 
	{
		myfile << "Sum is :" << sum;
	}
	myfile.close();
	
}

//Evan Mora
//Cosc 2030-01
//Lab 01

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	int count = 0;
	while (1) {
		
		streampos begin, end;
		fstream myfile;
		string file1;
		cout << "Enter a file name" << endl;
		getline(cin, file1); //Gets the file name from the keyboard
		myfile.open(file1); // Opens the file
		if (myfile.is_open())
		{
			cout << "Reading from the file" << endl;
			myfile.seekg(0);
			string firstline;
			getline(myfile,firstline);
			cout << "The first number in this file is: " <<firstline << endl;
			string secondline;
			getline(myfile, secondline);
			cout << "The second number in the file is: " << secondline << endl;
			myfile.seekg(SEEK_END);
			string lastline;
			getline(myfile, lastline);
			cout << "The last numer in the file is :" << lastline << endl;
			string secondlast;
			myfile.seekg(-1);
			getline(myfile, secondlast);
			cout << "The second from last number in the file is: " << secondlast << endl;
		}
		else
		{
			cout << "Could not open file, try again." << endl;
		}

		myfile.close();
		



	}

	

}
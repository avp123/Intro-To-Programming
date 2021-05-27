//libraries
#include <iostream>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //Data
	int luckyNumber = 17;
	double amountEarned = 50000.6;
	string movie = "Big Hero 6";
	char initial = 'A';

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW64\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //output label and value of each variable

	cout << "My favorite number is: " << luckyNumber << "\n";
	cout << "I plan to save this much money for the rest of my life: " << "$" << amountEarned << "\n";
	cout << "My favorite movie is: " << movie << "\n";
	cout << "The first letter in my name is: " << initial;

}//main
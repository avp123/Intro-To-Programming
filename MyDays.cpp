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
  	int days = 0;
	string DOB = "June 19, 2006";
	string dueDate = "February 12, 2021";
	int nDaysBefore = 170;
	int nDaysRemaining = 322;

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n";  
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW64\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  // determine day difference and output DOB dueDate and Age
	days = days + 365 * 16;
	days = days + 4;
	days = days - 170;
	days = days - 322;
	
	cout << "DOB: " << DOB <<"\n";
	cout << "Due Date: " << dueDate <<"\n";
	cout << "Age: " << days << " days";

}//main
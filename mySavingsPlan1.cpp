//libraries
#include <iostream> //console output
using namespace std;
#include <cmath> //pow function

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
  int years = 10;
  int deposit = 100;
  double interestRate = .075;
  int time;
  int amountSaved;
  

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW64\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  // calculate money gained
  interestRate = interestRate / 12;
  time = years * 12;
  amountSaved = 100 * ((pow(1 + interestRate, time) - 1) / interestRate);
  interestRate = interestRate * 100 * 12;
  
  // output calculated values(money gained, interestRate)
  cout << "In " << years << " years at " << interestRate << "%, $" << deposit << " deposited per month will grow to $" << amountSaved << ".";
  

}//main
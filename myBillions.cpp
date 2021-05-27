//libraries
#include <iostream> //console output
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
int weekCalculator(int dollars, int weeks); //week calculator

//main program
int main()
{
  //Data
  string objective = "Objective: This program will serve as a template for all programs\n written in this course.";//program objective
  string instructions = "";//user instructions, if any
  int weeks1 = 1;
  int weeks2 = 1;
  int weeks3 = 1;
  int dollars1 = 1000;
  int dollars2 = 1000000;
  int dollars3 = 1000000000;

  //user introduction
  introduction(objective, instructions);
  
  //week calculator and output
  cout << "It takes " << weekCalculator(dollars1, weeks1) << " weeks to get to $1,000 at this rate." << endl;
  cout << "It takes " << weekCalculator(dollars2, weeks2) << " weeks to get to $1,000,000 at this rate." << endl;
  cout << "It takes " << weekCalculator(dollars3, weeks3) << " weeks to get to $1,000,000,000 at this rate." << endl;
  
}//main

//user introduction()
void introduction(string obj, string ins)
{

  //Data
  //obj is the program objective
  //ins is the user instruction for the user introduction

  // introduction
  cout << obj << endl;
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW64\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
  cout << ins << endl << endl; 

}//introduction

//week Calculator()
int weekCalculator(int dollars, int weeks)
{
  //Data
  int result = 0;  
  double savingsPerWeek = .05;
  double totalValue = .05;

  while (totalValue < dollars)
  {
    savingsPerWeek = savingsPerWeek*2; 
    totalValue = totalValue + savingsPerWeek;
    weeks++;
  }


  result = weeks;
  return result;
}// weekCalculator
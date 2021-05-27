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

//main program
int main()
{
  //Data
  string objective = "Objective: This program will serve as a template for all programs\n written in this course.";//program objective
  string instructions = "";//user instructions, if any

  //user introduction
  introduction(objective, instructions);
  
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
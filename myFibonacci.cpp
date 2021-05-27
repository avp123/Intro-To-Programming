//libraries
#include <iostream>
#include <string>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string objective, string instructions);
int fibonacci(int t, int f1, int f2);


//main program
int main()
{
  //Data
  string objective = "Objective: //Objective:  Calculate fibonacci series value at given index.\n";
  string instructions = "Please enter in your instructions in the code.\n";
  int index;
  int value;

  // introduction
  introduction(objective, instructions);

  // input index
  cout << "Enter an index [0 or greater]: " ;
  cin >> index;
  cin.ignore(1000,10);

  // call recursive fibonacci function and output results
  value = fibonacci(index, 0, 1);
  cout << "\nThe Fibonacci number at index " << index << " is " << value << ".";

}//main

void introduction(string objective, string instructions)
{
  cout << objective; 
  cout << "Editor(s) used: MS Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  cout << instructions;
}//introduction

int fibonacci(int t, int f1, int f2)
{
  //Data
  //Null
  
  //initial ouput list
  cout << f1 << " ";
  
  //check cases
  if(t == 0) 
  {
    return f1;  
  }
  else
  {
    fibonacci(t-1, f2, f1 + f2);
  }
}


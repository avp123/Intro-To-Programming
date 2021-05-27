//libraries
#include <iostream> //console output
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
const int SIZE = 4;

//Programmer defined functions
void introduction(string obj, string ins); //user introduction

//main program
int main()
{
  //Data
  string objective = "Objective: This program will serve as a template for all programs\n written in this course.";//program objective
  string instructions = "You will be prompted for 4 numbers to get the average and how many of those numbers are above the average.";//user instructions, if any
  int numbers[SIZE];
  double average = 0;
  int nGreater = 0;
  int sum = 0;
  int count = 0;
  int i = 0;
  

  //user introduction
  introduction(objective, instructions);

  //input loop
  cout << "Please enter a number [0-100]: ";
  cin >> numbers[count];
  cin.ignore(1000,10);
  while(true)
  {

    while (numbers[count] < 0 || numbers[count] > 100)
    {
    cout << "That is an invalid input. Please enter a number [0-100]: ";
    cin >> numbers[count];
    cin.ignore(1000,10);
    } //while

    sum = sum + numbers[count];
    count = count + 1;
  
    if (count <= 3)
    {
    cout << "Please enter a number [0-100]: ";
    cin >> numbers[count];
    cin.ignore(1000,10);
    }//if

    else if (count = 4)
    {
      cout << "Thanks for the input!" << endl;
      break;
    }//else if

  }//while
  

  //calculate average
  
  if (count > 0)
  {
    average = double(sum) / double(count);
  }//if
  
  while(i < count)
  {
    if (average < numbers[i]) 
    {
      nGreater++;
    }//if
    i = i + 1;
  }//while

  //output results
  
  cout << "The average of the " << count << " numbers is " << average << "." <<endl;
  
  if (nGreater > 1)
  {
    cout << nGreater << " numbers are greater than the average.";
  }//if

  else if (nGreater = 0)
  {
    cout << nGreater << " number are greater than the average.";
  }//else if

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
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
  int size;
  int* scores = new int[size];
  int max;
  int min;
  int sum = 0;
  double average = 0.0;
  int nGradeA = 0;
  int temp;
  int i = 0;
  int j = 0;
  

  //user introduction
  introduction(objective, instructions);

  //input size
  cout << "How many scores: ";
  cin >> size;
  cin.ignore(1000,10);  
  if (size <= 0)
  {
    cout << "Number of scores must be greater than or equal to 1." << endl;
    cout << "How many scores: ";
    cin >> size;
    cin.ignore(1000,10); 
  }//if

  //input loop
  
  for (i = 0; i < size;)
  {
    cout << "Enter a score: ";
    cin >> scores[i];
    cin.ignore(1000,10);
    if(scores[i] > 100 || scores[i] < 0)
    {
      cout << "Invalid input for grade." << endl;
    }//if
    else
    {
      sum = sum + scores[i];
      i++;
    }//else
  }//for
  
  //calculate average
  average = double(sum) / double(size);

  //calculate max and min
  max = scores[0];
  min = scores[0];
  for (i = 1; i < size; i++)
  {
    if (max < scores[i]) max = scores[i];
    if (min > scores[i]) min = scores[i];
  }//for

  //calculate number of A grades
  for (i = 0; i < size; i++)
  {
    if (scores[i] >= 90) nGradeA++;
  }//for

  //sort loops
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (scores[i] > scores[j])
      {
        temp = scores[i];
        scores[i] = scores[j];
        scores[j] = temp;
      }//if
    }//for
  }//for

  //output
  cout << "\n\n" << endl;
  cout << "Sorted: ";
  for (i = 0; i < size; i++)
  {
    cout << scores[i] << ' ';
  }
  cout << endl;
  cout << "Minimum: " << min << endl;
  cout << "Maximum: " << max << endl;
  cout << "Average: " << average << endl;
  cout << "Number of A grade(s): " << nGradeA << endl;

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
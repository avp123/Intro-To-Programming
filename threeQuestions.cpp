//libraries
#include <iostream> //console output
using namespace std;
#include <cstdlib>

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string ins); //user introduction
bool answerQuestion(string question, int answer);

//main program
int main()
{
  //Data
  string objective = "Objective: This program will serve as a template for all programs\n written in this course.";//program objective
  string instructions = "";//user instructions, if any
  string question1 = "How many bytes are taken up by a unsigned long int data type: ";
  string question2 = "How many bytes does a long long data type take up: ";
  string question3 = "How many bytes are used in the regular float number: ";
  int questionAnswer1 = 4;
  int questionAnswer2 = 8;
  int questionAnswer3 = 4;
  int correct = 0;

  //user introduction
  introduction(objective, instructions);

  //answer question
  if (answerQuestion(question1, questionAnswer1)) correct++;
  if (answerQuestion(question2, questionAnswer2)) correct++;
  if (answerQuestion(question3, questionAnswer3)) correct++;
  
  //output results
  cout << "The number of questions you got correct was: " << correct;
  
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

//answerQuestion()
bool answerQuestion(string question, int questionAnswer)
{

//Data
bool result = false;
int userAnswer;

//Output question
cout << question;
cin >> userAnswer;
cin.ignore(1000,10);

//evaluate user answer
if (questionAnswer == userAnswer)
{
  cout << "Correct!" << endl;
  result = true;
}
else
{
  cout << "Sorry, but this answer is wrong. The actual answer is " << questionAnswer << endl;
}//if


  return result;
}//answerQuestion
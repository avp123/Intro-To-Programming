//libraries
#include <fstream> //file IO
#include <iostream> //console IO
#include <string> //manipulate strings
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string dir); //program introduction

struct Score
{
  int score; //each score
  Score* next; // the next-link which points to next node on the linked list
}; // Score


//main program
int main()
{
  //Data
  string objective = "read an input file of scores and find average score and number of scores greater than average.";
  string directions = "The file name used is scores.txt.\nPlease make sure you have this file ready.";
  ifstream fin; //represents input file
  Score* aScore; // temporary node to read each score from input file
  Score* start = 0; //start points to the first node of the list, or is zero if empty linked list
  int i; // loop counter 
  int scoreTotal = 0; //sum of all scores
  double average = 0.0; //average of all scores
  int nGreater = 0;  //number of scores greater than the average score
  int max; //max score
  int min; //min score
  Score* p; //eraseable index used in for loops
  int size = 0; //size of linked list


  //program introduction
  introduction(objective, directions);

  // input scores 
  fin.open("scores.txt"); 
  if (!fin.good()) throw "I/O error"; 
  while (fin.good()) 
  { 
    // read a score from the file 
    aScore = new Score; // create temporary node for each student in input file
    fin >> aScore->score; //input score 
    fin.ignore(1000, 10); 
    aScore->next = start; // set the next field equal to the start pointer (first node on the list)
    start = aScore; //set the start pointer to point to the first node on the list (new node)
  } // while 
  fin.close(); //close the input file
  cout << endl << endl;
  
  // find the average 
  for (p = start; p; p = p->next) 
  {
    scoreTotal += p->score; 
    size++;
  }
  average = (double)scoreTotal / double(size); 
  cout << "The average of " << size << " numbers is " << average << endl; 

  // count number of scores > average 
  for (p = start; p; p = p->next) if (p->score > average) nGreater++;
  cout << nGreater  << " scores are greater than the average." << endl; 
 
 // max and min number
  max = start->score;
  min = start->score;
  for (p = start; p; p = p->next) 
  {
    if (p->score > max)
    {
      max = p->score;
    }
    if (p->score < min)
    {
      min = p->score;
    }
  }
  
  cout << "The maximum score is: " << max << endl; 
  cout << "The minimum score is: " << min << endl;

}//main

//program introduction
void introduction(string obj, string dir)
{
  //Data
  //obj = the program objective (text)
  //dir = user instructions (text)

  // output my name and objective and program information
  cout << "Objective: This program "; 
  cout << obj << endl;
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  cout << dir << endl;
}//introduction
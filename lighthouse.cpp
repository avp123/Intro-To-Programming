//libraries
#include <iostream> //console output
#include <iomanip>
using namespace std;
#include <cmath>

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
  double lighthouseHeight;
  double totalDistance;

  cout << "What is the lighthouse's height in feet (between 5 and 400): ";
  cin >> lighthouseHeight;
  cin.ignore(1000,10);

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW64\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 


  // calculate distance in miles

  totalDistance = pow((0.8*lighthouseHeight),(0.5));

  //output distance and height

  cout.setf(ios::fixed);
  cout << setprecision(0);
  
  cout << "A " << lighthouseHeight << " foot tall lighthouse can be seen from " << totalDistance << " miles away.";


}//main
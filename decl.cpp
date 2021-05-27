//libraries
#include <iostream> //console output
#include <string>
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

  int luckyNumber;
  string favoriteMovie;
  double age;
  char firstLetter;

  cout << "What is your lucky number: ";
  cin >> luckyNumber;
  cin.ignore(1000,10);
  cout << "What is your favorite movie: ";
  getline(cin, favoriteMovie);
  cout << "What is your age (Enter with .5 if you are more than 6 months to your next birthday): ";
  cin >> age;
  cin.ignore(1000,10);
  cout << "What is the first letter of your first name: ";
  cin >> firstLetter;
  cin.ignore(1000,10);


  // introduction
  cout << "\nObjective: Prompt user to enter their lucky number, favorite movie, age, and first initial\nand then output whatever information they input.\n";  
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW64\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 


  //output results
  cout << "My lucky number is " << luckyNumber << ". My favorite movie is " << favoriteMovie << ". My age is " << age << ". The first letter of my first name is " << firstLetter << ".";
  

}//main
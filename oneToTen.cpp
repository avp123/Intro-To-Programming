//libraries
#include <iostream> //console output
using namespace std;
#include <ctime>
#include <cstdlib>

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
  srand(time(0)); rand();//"seed" the random number generator
  int target = 1 + (rand() % 10);//number user has to guess
  int userGuess;//number user guesses

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n";  
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW64\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //user introduction
  cout << "Objective: You will be prompted to guess a number between 1 and 10. \nI'm thinking of a number from 1 to 10." << endl;
  
  //game loop
  while (true)
	{
  	cout << "What is your guess [1-10 or 0 to exit]: ";
        cin >> userGuess;
        cin.ignore(1000,10);
        if (userGuess == 0) break;
	else if ((userGuess < 0 || userGuess > 10))
		{
		cout << "I really want a number between 1 and 10 inclusive or 0 to exit the game!" << endl;
		}
	else if (userGuess == target)
		{
		cout << "You guessed it!" << endl;
		break;
		}
	else if (userGuess != target)
		{
		cout << "Try again..." << endl;
		}//if
	
	}//while
  cout << "Thanks for playing!";
		
		

}//main

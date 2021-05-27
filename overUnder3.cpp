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
  int target = 1 + (rand() % 100);//number user has to guess
  int userGuess;//number user guesses
  const int MAX_GUESSES = 100;
  int nGuesses = 0;
  int guess[MAX_GUESSES];
  int i = 0;
  int counter = 0;
  bool matchingNumber = false;

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW64\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //user introduction
  cout << "Objective: You will be prompted to guess a number between 1 and 100. \nAuthor: Ashray. \nI'm thinking of a number from 1 to 100." << endl;
  
  //game loop
  while (true)
  {
    //input guess
    cout << "What is your guess [1-100 or 0 to exit]: ";
    cin >> userGuess;
    cin.ignore(1000,10);

    //check if already entered
    matchingNumber = false;
    for(i = 0; i < nGuesses; i++)
    {
      if(guess[i] == userGuess)
      {
        cout << "You already guessed " << guess[i] << ". Please try to enter new numbers only!" << endl;
        matchingNumber = true;
      }
    }//for
    
    if(!matchingNumber)
    {
      if (userGuess == 0) break;
      else if ((userGuess < 0 || userGuess > 100))
      {
        cout << "I really want a number between 1 and 100 inclusive or 0 to exit the game!" << endl;
      }//else if
      else if (userGuess == target)
      {
        cout << "You guessed it!" << endl;
        counter++;
        break;
      }//else if
      else if (userGuess != target)
      {
        if (userGuess < target)
        {
	  cout << "That's too low..." << endl;
          if(nGuesses < MAX_GUESSES)
          {
            guess[nGuesses++] = userGuess;
          }
          counter++;
        }//if
        else if (userGuess > target)
        {
	  cout << "That's too high..." << endl;
          if(nGuesses < MAX_GUESSES)
          {
            guess[nGuesses++] = userGuess;
          }
          counter++;
        }//else if
        cout << "Try again..." << endl;
      }//else if
    }//if

  }//while
  cout << "You took a total of " << counter << " tries!" << endl;
  cout << "Thanks for playing!";
		
		

}//main
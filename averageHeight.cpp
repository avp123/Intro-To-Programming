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
//NONE

//main program
int main()
{
  //Data
  int sum = 0;
  int count = 0;
  double average = 0.0;
  int height = 0;

  // introduction
  cout << "Objective: Calculate the average weight of everyone in the room.\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW64\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  // input each person's height and count them, calculate and output average height
while(true)
{
  cout << "What is your height in inches [15-110, or -1 to exit]? ";
  cin >> height;
  cin.ignore(1000,10);
  if (height == -1)
  {
  	if (count > 0)
	{
		average = sum / count;
		cout << "The average height of everyone in the room is " << average << ".";
		break;
	}
	else
	{
		cout << "There are no people in the room!";
		break;
	}
  }
  else if (height >= 15 && height <= 120)
  {
	sum = sum + height;
	count = count + 1;
  }
  else
  {
	cout << "Invalid value, see valid values in [] " << endl;
  }
}

}//main
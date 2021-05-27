//libraries
#include <iomanip> //formatting
#include <iostream>  //console input and output
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
#ifdef _WIN32 
#include <windows.h> 
#else 
#include <unistd.h> 
#endif 

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //Data
  int hundredThousand = 0; //(1 digits width) in odometer
  int tenThousand = 0; //(1 digits width) in odometer
  int thousand = 0;//(1 digits width) in odometer
  int hundred = 0; //(1 digits width) in odometer
  int ten = 0; //(1 digits width) in odometer
  int one = 0;//(1 digits width) in odometer
  int tenth = 0;//(1 digits width) in odometer

  // output my name and objective and program information
  cout << "Objective: This program will simulate an odometer.\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  cout << endl << endl << "CTRL-C to exit...\n"; 

  //output odometer
  cout.fill('9'); //format the initial digital clock to 999999.9
  for (hundredThousand = 0; hundredThousand < 10; hundredThousand++) 
  { 
    for (tenThousand = 0; tenThousand < 10; tenThousand++) 
    { 
      for (thousand = 0; thousand < 10; thousand++) 
      {
        for (hundred = 0; hundred < 10; hundred++)
        {
          for (ten = 0; ten < 10; ten++)
          {
            for (one = 0; one < 10; one++)
            {
              for (tenth = 0; tenth < 10; tenth++)
              {
        //output hundredThousands, tenThousands, thousands, hundreds, tens, ones, tenths of an odometer
        cout << setw(1) << hundredThousand; 
        cout << setw(1) << tenThousand; 
        cout << setw(1) << thousand; 
        cout << setw(1) << hundred; 
        cout << setw(1) << ten; 
        cout << setw(1) << one << '.'; 
        cout << setw(1) << tenth; 
        cout.flush();  //clears the output buffer

        //pause for one second  
        #ifdef _WIN32 
        Sleep(100); // one thousand milliseconds
        #else 
        sleep(.1); // one second 
        #endif 

        //return to begining of current line  
        cout << '\r'; // CR 
              }//for tenths
            }//for ones
          }//for tens
        } //for hundreds
      } //for thousands
    } // for tenThousands
  } //for hundredThousands
}//main
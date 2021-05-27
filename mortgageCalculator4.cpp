//libraries
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
#include <cmath>
//Programmer defined data types
struct Mortgage
{
  int amountBorrowed;
  double interestRate;
  int payments;
  double mortgagePayment;
};

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string objective, string instructions);
bool getPassword(int correctPassword);
string getInputFile();
double calcMortgage(int borrowed, double monthlyRate, int months);
//main program
int main()
{
  //Data
  string objective = "Objective: Calculate your mortgage payments.\n";
  string instructions = "Please follow every direction and input a password and a file name when prompted.\nOn top of that, please make sure the first line of the file is the mortgage amount \nand the second line is the yearly interest rate.\n";
  Mortgage user;
  double monthlyRate;
  int paybackPeriod = 30;
  user.payments = paybackPeriod * 12;
  ifstream fin;
  
  // introduction
  introduction(objective, instructions);
  
  //get password
  while(true)
    if (getPassword(1854516)) break;

  //get inputs from the input file
  fin.open(getInputFile());
  if (!fin.good()) throw "I/O error";
  fin >> user.amountBorrowed;
  fin.ignore(1000, 10);
  fin >> user.interestRate;
  fin.ignore(1000, 10);
  monthlyRate = user.interestRate / 1200;
  fin.close();

  //calculate the amount of money to be paid each month AND output results
  cout << "Amount borrowed: $" << user.amountBorrowed << endl;
  cout << "Interest rate(yearly): " << user.interestRate << "%\n";
  cout << "Payback period: " << paybackPeriod << " years\n";
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2) << "Amount to pay per month: $" << calcMortgage(user.amountBorrowed, monthlyRate, user.payments) << endl;
}//main

void introduction(string objective, string instructions)
{
  cout << objective; 
  cout << "Editor(s) used: MS Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  cout << instructions;
}

bool getPassword(int correctPassword)
{
  //Data
  int userGuess;

  cout << "Enter in the password: ";
  cin >> userGuess;
  cin.ignore(1000, 10);
  
  //determine whether or not the user entered in the right password
  if (userGuess == correctPassword)
    return true;
  else
  {
    cout << "Incorrect password. Please try again.\n";
    return false;
  }
}

string getInputFile()
{
  string inputFile;
  cout << "Enter in the file you will use for input: ";
  getline(cin, inputFile);
  return inputFile;
}

double calcMortgage(int borrowed, double monthlyRate, int months)
{
  double result = ((borrowed * monthlyRate * pow((1 + monthlyRate), months)) / (pow((1 + monthlyRate), months) - 1));
  return result;
}
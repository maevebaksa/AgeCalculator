// Calculator - Written By Maeve Baksa - 09.22.2021

#include <iostream>
#include <string>

using namespace std;

//main loop

int main(){
  //create the input and output variables
  int input;
  int output;

  //ask for input
  cout << "Please enter either your year of birth, or your age to calculate the other: ";
  cin >> input;

  //calculate output and change 2021
  output = 2021 - input;

  //print output
  cout << "Your age or year of birth is " << output << "\n";  
  
  //yes
  return 0;
}
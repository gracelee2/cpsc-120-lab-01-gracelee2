// Grace Lee
// CPSC 120-01
// 2021-09-15
// grace1@csu.fullerton.edu
// @gracelee2
//
// Lab 01-03
//
// This program prints out the number of days, hours, minutes, and seconds there
// is in the number entered.
//

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  
  const int knumsecmin = 60;
  
  const int knumsechour = 3600;
  
  const int knumsecday = 86400;
  
  int number_seconds = 0;
  
  cout << "Please enter the number of seconds you'd like to convert:";
  
  cin >> number_seconds;
  
  int number_days = number_seconds / knumsecday;

  
  number_seconds = number_seconds % knumsecday;
  
  int number_hours = number_seconds / knumsechour;
  
  number_seconds = number_seconds % knumsechour;
  
  int number_minutes = number_seconds / knumsecmin;
  
  number_seconds = number_seconds % knumsecmin;
  
  cout << "That's " << number_days << " days, " << number_hours << " hours, "
       << number_minutes << " minutes,and " << number_seconds << " seconds.\n";
  return 0;
}

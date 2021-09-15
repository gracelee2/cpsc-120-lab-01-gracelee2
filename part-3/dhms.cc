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
  // TODO: Declare a const int for the number of seconds in a minute
  const int num_sec_min = 60;
  // TODO: Declare a const int for the number of seconds in an hour
  const int num_sec_hour = 3600;
  // TODO: Declare a const int for the number of seconds in a day
  const int num_sec_day = 86400;
  // TODO: Declare an int variable named number_seconds to store the input
  int number_seconds = 0;
  // TODO: Print a prompt for how many seconds the program is going to convert
  // from Remember not to put a "\n"
  cout << "Please enter the number of seconds you'd like to convert:";
  // TODO: Use cin to store the number of seconds into number_seconds
  cin >> number_seconds;
  // TODO: Calculate the total number of days, store the result in a new
  // variable named number_days
  int number_days = number_seconds / num_sec_day;

  // TODO: Calculate the remaining number of seconds, store the result back into
  // number_seconds
  number_seconds = number_seconds % num_sec_day;
  // TODO: Calculate the total number of hours, store the result in a new
  // variable named number_hours
  int number_hours = number_seconds / num_sec_hour;
  // TODO: Calculate the remaining number of seconds, store the result back into
  // number_seconds
  number_seconds = number_seconds % num_sec_hour;
  // TODO: Calculate the total number of minutes, store the result in a new
  // variable named number_minutes
  int number_minutes = number_seconds / num_sec_min;
  // TODO: Calculate the remaining number of seconds, store the result back into
  // number_seconds
  number_seconds = number_seconds % num_sec_min;
  // TODO: Display the resulting values in a nice way.
  cout << "That's " << number_days << " days, " << number_hours << " hours, "
       << number_minutes << " minutes,and " << number_seconds << " seconds.\n";
  return 0;
}

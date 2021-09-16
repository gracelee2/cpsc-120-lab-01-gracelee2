// Grace Lee
// CPSC 120-01
// 2021-09-13
// grace1@csu.fullerton.edu
// @gracelee2
//
// Lab 01-02
//
// This program tells you how far your guess is from the winning number.
//

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int secret_number = 42;

  int player_guess = 0;

  cout << "Guess a number:\n";

  cin >> player_guess;

  cout << "You guessed " << player_guess << ", let's see if that's right...\n";
  
  if (secret_number == player_guess) {
    cout << "Winner, winner, chicken dinner!\n";
  } else if (player_guess < secret_number) {
    cout << "Getting colder...\n";
  } else if (player_guess > secret_number) {
    cout << "Too warm...\n";
  }

  

  return 0;
}

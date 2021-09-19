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
  const int kSecretNumber = 42;

  int player_guess = 0;

  cout << "Guess a number:\n";

  cin >> player_guess;

  cout << "You guessed " << player_guess << ", let's see if that's right...\n";

  if (kSecretNumber == player_guess) {
    cout << "Winner, winner, chicken dinner!\n";
  } else if (player_guess < kSecretNumber) {
    cout << "Getting colder...\n";
  } else {
    cout << "Too warm...\n";
  }

  return 0;
}

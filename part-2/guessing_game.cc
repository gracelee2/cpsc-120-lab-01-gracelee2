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
  // TODO: Declare a variable named secret_number and
  //       hardcode the value to 42.
  int secret_number = 42;
  // TODO: Declare a variable named player_guess that will store the player's
  // guess
  int player_guess = 0;
  // Prompt the player for a guess and collect their guess
  cout << "Guess a number:\n";
  // TODO: Save the player's guess into player_guess using cin and >>
  cin >> player_guess;
  // TODO: Print out the player's guess.
  //       "You guessed 12, let's see if that's right..."
  //       To build up tension, you can use the sleep function to
  //       put the program to sleep for a few seconds.
  //       See
  //       https://manpages.ubuntu.com/manpages/disco/en/man3/sleep.3posix.html
  cout << "You guessed " << player_guess << ", let's see if that's right...\n";
  // TODO: If the guess is the same (or equal to) the secret_number
  //       print "Winner, winner, chicken dinner!\n"
  if (secret_number == player_guess) {
    cout << "Winner, winner, chicken dinner!\n";
  } else if (player_guess < secret_number){
    cout << "Getting colder...\n";
  } else if (player_guess > secret_number){
    cout << "Too warm...\n";
  }

  // TODO: Else if the the guess is less than the secret_number
  //       print "Getting colder...\n"

  // TODO: Else the guess must be greater than the secret_number
  //       print "Too warm...\n"

  return 0;
}

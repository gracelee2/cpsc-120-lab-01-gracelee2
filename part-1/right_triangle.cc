// Grace Lee
// CPSC 120-01
// 2021-09-15
// grace1@csu.fullerton.edu
// @gracelee2
//
// Lab 01-01
//
// This my lab and it prints out the sides of a triangle!
//

#include <iostream>

using namespace std;

// This is the 'main' function which is our entry point. The name 'main'
// has a special meaning in C++. Whenever you run this program it will
// start executing from the first line of this function.
int main(int argc, char const *argv[]) {




  
  cout << "What's the length of the first side?\n";

  int side_a = 0;

  cin >> side_a;

  
  cout << "What's the length of the second side?\n";

  
  int side_b = 0;

  cin >> side_b;

  
  cout << "What's the length of the diagonal or hypontenuse?\n";

  int side_c = 0;

  cin >> side_c;

  int left_hand_side = (side_a * side_a) + (side_b * side_b);


  
  int right_hand_side = side_c * side_c;

  cout << "You entered " << side_a << " for the length of the first side.\n";
  cout << "You entered " << side_b << " for the length of the second side.\n";
  cout << "You entered " << side_c
       << " for the length of the diagonal or hypontenuse.\n";

  if (left_hand_side == right_hand_side) {
    cout << " A triangle with sides of length " << side_a << " and " << side_b
         << " with a hypotenuse of length " << side_c
         << " is a right triangle!\n";
  } else if (left_hand_side != right_hand_side) {
    cout << "A triangle with sides of length " << side_a << " and " << side_b
         << " with a hypotenuse of length " << side_c
         << " is not a right triangle.\n";
  }
  return 0;
}

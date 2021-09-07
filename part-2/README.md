# CPSC 120

## Guessing Game

You love games and you think it would be great to write a guessing game. The program will think of a number and you have to guess it. You only have one guess every time you run the program. The program does remember what the secret number is because it is hard-coded into the program's source code.

Prompt the player to enter an [integer](https://en.wikipedia.org/wiki/Integer) guess. The computer will carefully consider your guess and tell the player if they're getting warmer or colder. The player wins when they guess the secret number.

## Requirements

You shall use [cout](https://en.cppreference.com/w/cpp/io/cout) to print messages to the terminal and you shall use [cin](https://en.cppreference.com/w/cpp/io/cin) to read in values from the keyboard.

Store the secret number and the player's guess in variables. Remind the player what they guessed and then check to see if they win. Use the [`if`, `else if` and `else` keywords](https://en.cppreference.com/w/cpp/language/if) and the [comparison operators](https://en.cppreference.com/w/cpp/language/operator_comparison) such as `==`, `<`, and `>` to figure out if the player has won.

The starting code defines a series of `TODO` comments which you can use to formulate your plan and develop your program.

Write your program progressively. Compile your program often and check that you're making progress. Make sure your program behaves the way you expect.

The output of your program must match the output given in the section Example Output below.

## Compiling

To compile your program, you use the `clang++` command. If you want to save your program with a unique name you use the `-o` option. (Do not type the `$`, that is the prompt.)
```
$ clang++ -std=c++14 guessing_game.cc -o guessing_game
$ ./guessing_game
```
Warning: do not use `-o` to overwrite your .cc file. For example, `clang++ foo.cc -o foo.cc` will delete your work.

## Don't Forget

Please remember that:
- You need to put a header in every file.
- You need to follow the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).
- Remove the `TODO` comments.

## Testing Your Code

Computers only ever do exactly what they are told, exactly the way they are told it, and never anything else. Testing is an important process to writing a program. You need to test for the program to behave correctly and test that the program behaves incorrectly in a predictable way.

As programmers we have to remember that there are a lot of ways that we can write the wrong program and only one to a few ways to write the correct program. We have to be aware of [cognitive biases](https://en.wikipedia.org/wiki/List_of_cognitive_biases) that we may exercise that lead us to believe we have correctly completed our program. That belief may be incorrect and our software may have errors. [Errors in software](https://www.wired.com/2005/11/historys-worst-software-bugs/) may lead to loss of [life](https://www.nytimes.com/2019/03/14/business/boeing-737-software-update.html), [property](https://en.wikipedia.org/wiki/Mariner_1), [reputation](https://en.wikipedia.org/wiki/Pentium_FDIV_bug), or [all of the above](https://en.wikipedia.org/wiki/2009%E2%80%9311_Toyota_vehicle_recalls).

### Test strategy

Start simple, and work your way up. Good tests are specific, cover a broad range of fundamentally different possibilities, can identify issues quickly, easily, and directly, without need for much set up, and can almost be diagnosed by inspection if the code fails to execute the test correctly.

### Cases to try

Start simple, and work your way up. Good tests are specific, cover a broad range of fundamentally different possibilities, can identify issues quickly, easily, and directly, without need for much set up, and can almost be diagnosed by inspection if the code fails to execute the test correctly.

What happens if the player inputs a negative number or a floating point number?

What happens if the player inputs a string like "cat" or "fifteen"?

## Example Output

Please ensure your program's output is identical to the example below.
```
$ clang++ -std=c++14 guessing_game.cc -o guessing_game
$ ./guessing_game 
Guess a number: 42
You guessed 42, let's see if that's right...
Winner, winner, chicken dinner!
$ ./guessing_game 
Guess a number: 123
You guessed 123, let's see if that's right...
Too warm...
$ ./guessing_game 
Guess a number: -34
You guessed -34, let's see if that's right...
Getting colder...
```

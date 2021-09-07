# CPSC 120

## Days Hours Minutes Seconds

Did you know that [Unix](https://en.wikipedia.org/wiki/Unix) and [POSIX](https://en.wikipedia.org/wiki/POSIX) measure time as the number of seconds that have passed since midnight January 1, 1970. (Which time zone? Well [UT](https://en.wikipedia.org/wiki/Universal_Time) of course.) This is called [Unix Epoch](https://en.wikipedia.org/wiki/Unix_time) and it's the arbitrary date that is used to keep track of time. Linux uses the Unix Epoch as it's epoch.

The problem for us is that it is nearly impossible to figure out how much time has passed if we only know how many seconds have passed. It is preferable to know how many days, hours, minutes, and seconds have passed.

Let's write a program that will take the number of seconds you enter and convert it to days, hours, minutes, and seconds. The general idea that we're working with is that we know the following facts:
- There are 60 seconds in a minute, or 1 minute × 60 seconds
- There are 60 minutes in an hour, or 60 minutes × 60 seconds
- There are 24 hours in a day, or 24 hours × 60 minutes × 60 seconds

We can save these facts as constants, or in C++ talk [`const`](https://en.cppreference.com/w/cpp/language/cv) objects. Then we can use integer arithmetic to calculate what we'd like to find out.

Working with an example, let's say we'd like to know how many days, hours, minutes, and seconds there are in 183,885 seconds. Let's work from the largest unit of time (days) to the smallest (seconds).
1. 183,885 ÷ (24 × 60 × 60) = 2 days, the remainder is 11,085 seconds
At this point we know 183,885 seconds is 2 days and 11,085 seconds. Next we have to figure out how many hours are in 11,085 seconds.

1. 11,085 ÷ (60 × 60) = 3 hours, the remainder is 285 seconds
We now know 183,885 seconds is 2 days, 3 hours and 285 seconds. Next we have to calculate how many minutes are in 285 seconds.

1. 285 ÷ 60 = 4 minutes, the remainder is 45 seconds
We know 285 seconds is 4 minutes and 45 seconds.

Putting all this information together, we know that 183,885 seconds is 2 days, 3 hours, 4 minutes, and 45 seconds.

Try working through the same steps to find out how many days, hours, minutes, and seconds there are in 340,762,837 seconds. Do the calculations in your notebook with the help of a calculator to verify you understand the algorithm.

When you converted 340,762,837 seconds did you find that it is 3944 days, 0 hours, 20 min, 37 seconds?

The [arithmetic operators](https://en.cppreference.com/w/cpp/language/operator_arithmetic) we'll need to use are division `/` and modulo `%`.

[Division](https://en.wikipedia.org/wiki/Division_(mathematics)) between two numbers results in a quotient and a remainder. Division is the inverse of [multiplication](https://en.wikipedia.org/wiki/Multiplication). Remember that we're using [integers](https://en.wikipedia.org/wiki/Integer) so there's no such thing as a decimal point in the world of integers.

The [modullo](https://en.wikipedia.org/wiki/Modulo_operation) operator in C++ is the `%` character. This operation calculates the remainder of a division between two numbers. For example, 7 ÷ 3 has a quotient of 2 and a remainder of 1. To calculate only the remainder, in C++ we can write the expression as `7 % 3` which will return the remainder of 1.

Using these two operations we can start with a number of seconds and work our way to days, hours, minutes, and seconds by using the division operation and the modulo operation. 

Our program will work well for really large positive numbers and really small negative numbers. If you asked your converter to work with units of time on the geological  or astronomical scale the converter won't work. The reason is that the C++ `int` type has a fixed maximum and minnimum. (How many seconds should you input to break the program? Why is that number special?)

## Compiling

To compile your program, you use the `clang++` command. If you want to save your program with a unique name you use the `-o` option. (Do not type the `$`, that is the prompt.)
```
$ clang++ -std=c++14 dhms -o dhms.cc
$ ./dhms
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

## Example Output

Please ensure your program's output is identical to the example below.
```
$ clang++ -std=c++14 dhms.cc -o dhms
$ ./dhms 
Please enter the number of seconds you'd like to convert: 183885
That's 2 days, 3 hours, 4 minutes, 45 seconds.
$ ./dhms 
Please enter the number of seconds you'd like to convert: 300
That's 0 days, 0 hours, 5 minutes, 0 seconds.
$ ./dhms 
Please enter the number of seconds you'd like to convert: 2592000
That's 30 days, 0 hours, 0 minutes, 0 seconds.
```


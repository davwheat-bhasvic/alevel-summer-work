<p align="center">
  <img src="../../../common-assets/blob/main/images/bhasvic/bhasvic-rect-hills-text-small.png?raw=true">
</p>

# Computer Science A-Level Summer Work

This repo contains some of the C code I've played about with for my Comp Sci summer work.

## `main.c`

This file asks the user to select an option to choose which exercise code to run.

## Exercise 1

Using the pseudocode example below, write a program that asks the user for 2 float numbers, separated by commas and then multiplies them, and outputs the answer.

```
num1 = INPUT ("Enter number 1")
num2 = INPUT ("Enter number 2")
result = num1 * num2
OUTPUT result
```

## Exercise 2

We can use format codes to output/ display a stored data type as a different one. E.g. I can read a number into an integer variable and ask C to output it as a `char`. This will display the `int` value as a character - whatever its equivalent letter is. (values between 65-90 (uppercase) and 97-122 (lowercase) but you can try other values and see what comes out!)

Write a program that asks the user to input one letter, and then outputs that letter’s ASCII code value. Think about how you can use the different format codes as described above in a `printf` statement.

## Exercise 3

```c
#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    int value = 0, check = 0;
    printf("Enter a number:");
    fflush(stdin);
    check = scanf("%d", &value);
    printf("scanf returned: %d \n", check);
}
```

Add to your program so it uses a new variable to catch the return value from `scanf`. Make sure it displays the value of error, like my program above. Add another couple of lines of code to then read in two numbers, again using your `error` variable, and display the value of error. Now try it with three values.

What is the value of error when an invalid character is typed in?

Comment out the `fflush(stdin)` between reading in the data. What happens?

## Exercise 4

Write a program that takes the following inputs:

- an integer
- a float
- a char

The program should output user friendly messages to show:

a. the result of `float - int`
b. the result of `(float - int) * char`

## Exercise 5

Write a program that asks for a letter to be input in upper case. The program should then output that letter in lower case.

To do this, think about each letter’s binary ASCII values and how you could use these to convert them.

| Letter | Value |
| :----: | :---: |
|  `A`   | `65`  |
|  `a`   | `97`  |

## Date test

The program asks a user to input their date of birth, one value at a time.

As the user enters their DOB, the program verifies that the entries are valid by checking that the year entered isn't in the future, the entered month is valid, and the date matches the suitable range for the month.

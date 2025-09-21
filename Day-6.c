//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even
*/

#include <stdio.h>
int main () {
  int n;
  printf("enter any integer:\n");
  scanf("%d", &n);

  if (n % 2 == 0) {
    printf("the integer is even\n");
  } 
  else {
    printf("the integer is odd\n");
  }
  
  return 0;
}

//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive
*/

#include <stdio.h>
int main () {
  int n;
  printf("enter any integer:\n");
  scanf("%d", &n);

  if (n >= 0) {
    if (n == 0) {
      printf("the integer is 0\n");
    } 
    else {
      printf("the integer is positive\n");
    }
  }
  else {
    printf ("the integer is negative\n");
  }
  return 0;
}

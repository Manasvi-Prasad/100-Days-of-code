//Q1: Write a program to input two numbers and display their sum.


//Sample Test Cases:
//Input 1:
//3 4
//Output 1:
//Sum = 7

//Input 2:
//-1 20
//Output 2:
//Sum = 19

#include<stdio.h>
int main () {
  int n1 , n2 , sum;
  printf("enter the first number\n");
  scanf("%d", &n1);
  printf("enter the second number\n");
  scanf("%d", &n2);
  
  sum = n1 + n2 ;

  printf("the sum of %d and %d = %d \n", n1 , n2, sum);

  return 0;
}


//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/

#include <stdio.h>
int main () {
  int a, b;
  int Sum, Diff, Product, Quotient;
  printf("enter the two numbers :\n");
  scanf("%d %d", &a, &b);

  Sum = a + b;
  Diff = a - b;
  Product = a*b;
  Quotient = a/b;

  printf("Sum = %d , Diff = %d , Product = %d , Quotient = %d\n", Sum, Diff, Product, Quotient);

  return 0;
}

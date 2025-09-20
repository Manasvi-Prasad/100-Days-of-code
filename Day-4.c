//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7
*/

#include<stdio.h>
int main(){
  int a, b;
  printf("enter the two number you want to swap- a, b: \n");
  scanf("%d %d", &a, &b);

  a = a + b;
  b = a - b;
  a = a - b;
  
  printf("the numbers after swapping without any third variable are num1:%d , num2:%d \n", a , b);
  return 0;
}

//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55
*/

#include<stdio.h>
int main (){
  int n, sum;
  printf("enter the number n:\n");
  scanf("%d", &n);

  sum = n*(n+1)/2;
  printf("the sum is %d\n", sum);
  return 0;
}

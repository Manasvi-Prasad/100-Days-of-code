//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/

#include<stdio.h>
int main(){

   double celsius, fahrenheit;
   
   printf("enter the temp in celsius: \n");
   scanf("%lf", &celsius);
   fahrenheit = (celsius* 9.0/5.0)+32;

   printf("value in fahrenheit is %lf\n", fahrenheit);
  return 0;
}

//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1
*/

#include<stdio.h>
int main(){
  int num1, num2, var3;
  printf("input the two numbers you want to swap:\n");
  scanf("%d %d", &num1, &num2);

  var3 = num1;
  num1 = num2;
  num2 =var3;
  
  printf("after swapping number 1: %d\n, number 2: %d\n", num1, num2);
  return 0;
}

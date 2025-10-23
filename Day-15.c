//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6
*/

#include <stdio.h>
int main() {
    int n, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is: %d\n", n, factorial);
    return 0;
}

//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/

#include <stdio.h>
int main() {
  
    int num, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;       // Get last digit
        rev = rev * 10 + digit; // Append to reversed number
        num = num / 10;         // Remove last digit
    }
    printf("Reversed number is: %d\n", rev);
    return 0;
}

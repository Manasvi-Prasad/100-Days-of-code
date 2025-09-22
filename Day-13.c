//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/

# include<stdio.h>
int main() {
    char operator;
    int num1;
    int num2;
    int result;
    printf("Enter an Operator(+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d",num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d",num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d",num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result: %d / %d = %d",num1, num2, result);
            break;
        default:
            printf("%c in not a valid operator", operator);
    }
    return 0;    
}

//Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Numbers from 1 to %d are: ", n);
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

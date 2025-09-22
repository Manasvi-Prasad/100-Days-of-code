//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25
*/

#include <stdio.h>
int main() {
    int a, sum = 0;
    printf("Enter how many odd numbers to sum: ");
    scanf("%d", &a);
    for (int i = 1, count = 0; count < a; i +=2) {
        sum +=i;
        count++;
    }
    printf("Sum of first %d odd numbers is: %d\n", a, sum);
    return 0;
}

//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)
*/

#include <stdio.h>
int main() {
    int a, product = 1;
    printf("Enter how many odd numbers to multiply: ");
    scanf("%d", &a);
    for (int i = 2, count = 0; count < a; i +=2) {
        product *= i;
        count++;
    }
    printf("Product of first %d even natural numbers is: %d\n", a, product);
    return 0;
}

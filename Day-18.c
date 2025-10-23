//Q35: Write a program to print all factors of a given number.
/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a number greater than zero.\n");
        return 0;
    }

    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

//Q36: Write a program to find the HCF (GCD) of two numbers.
/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first positive integer: ");
    scanf("%d", &a);
    printf("Enter second positive integer: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    printf("HCF (GCD) = %d\n", a);

    return 0;
}

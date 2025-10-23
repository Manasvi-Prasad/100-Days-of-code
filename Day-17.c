//Q33: Write a program to check if a number is an Armstrong number.
/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, result = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    // Count number of digits
    while (original != 0) {
        original /= 10;
        digits++;
    }
    original = n;
    // Calculate sum of each digit raised to the power of digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }
    if (result == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
} 


//Q34: Write a program to check if a number is prime.
/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime
*/

#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not prime");
        return 0;
    }

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}

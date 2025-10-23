/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    int binary = 0, place = 1;

    while (n > 0) {
        binary += (n % 2) * place;
        n = n / 2;
        place *= 10;
    }

    printf("%d", binary);

    return 0;
}


//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/

#include <stdio.h>

int main() {
    int num, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Save original number

    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (rev == original) {
        printf("It is a Palindrome\n");
    }
    else {
        printf("It is not a Palindrome\n");
    }

    return 0;
}

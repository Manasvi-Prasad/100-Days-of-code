//Q39: Write a program to find the product of odd digits of a number.
/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>

int main() {
    int n, digit, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (; n != 0; n = n / 10) {
        digit = n % 10;
        if (digit % 2 != 0) {     // check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
    }

    if (!hasOdd)
        product = 1;  // if no odd digits, assume product = 1

    printf("%d", product);

    return 0;
}


//Q40: Write a program to find the 1’s complement of a binary number and print it.
/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>

int main() {
    char binary[50];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);   // read binary number as string

    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid input! Only 0s and 1s allowed.");
            return 0;
        }
    }

    printf("%s", binary);

    return 0;
}

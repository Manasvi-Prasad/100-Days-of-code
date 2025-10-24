//Q41: Write a program to swap the first and last digit of a number.
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>

int main() {
    int n, first, last, temp, divisor = 1, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;  // get last digit

    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first = temp;   // get first digit

    // remove first and last digits to get middle part
    middle = (n % divisor) / 10;
  
    swapped = (last * divisor) + (middle * 10) + first;
    printf("%d", swapped);

    return 0;
}


//Q42: Write a program to check if a number is a perfect number.
/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number
*/

#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a number greater than zero.\n");
        return 0;
    }
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) 
        printf("%d is a perfect number", num);
    else
        printf("%d is not a perfect number", num);
    return 0;
}

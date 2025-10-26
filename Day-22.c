//Q43: Write a program to check if a number is a strong number.
/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/

#include <stdio.h>
int main() {
    int num, factorial, sum = 0, a;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = num; i > 0; i/=10) {
         a = i % 10;
         factorial = 1;
        for (int j = 1; j <= a; j++) {
            factorial *= j;
        }
        sum += factorial;
    }    
    printf("%d", sum);
    return 0 ;
}


//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4
*/

#include <stdio.h>
int main() {
    int num, temp, digit, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (temp > 0) {
        digit = temp % 10; 
        fact = 1;

        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10; 
    }

    if (sum == num)
        printf("%d is a Strong number", num);
    else
        printf("%d is not a Strong number", num);

    return 0;
}

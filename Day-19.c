//Q37: Write a program to find the LCM of two numbers.
/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include <stdio.h>
int main() {
    int first_num, second_num, og_first, og_second, hcf, lcm;

    printf("Enter first positive number: ");
    scanf("%d", &first_num);
    printf("Enter second positive number: ");
    scanf("%d", &second_num);

    og_first = first_num;
    og_second = second_num;

    while (first_num != second_num) {
        if (first_num > second_num) {
            first_num = first_num - second_num;
        }
        else {
            second_num = second_num - first_num;
        }
    }
    
    hcf = first_num;
    lcm = (og_first * og_second) / hcf;
    printf("LCM of %d and %d = %d", og_first,  og_second, lcm);
  
    return 0;
}


//Q38: Write a program to find the sum of digits of a number.
/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
*/

#include <stdio.h>

int main() {
    int n, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        temp = n % 10; // get last digit
        sum = sum + temp; // add it to sum
        n = n / 10; // remove last digit
    }

    printf("%d", sum);

    return 0;
}

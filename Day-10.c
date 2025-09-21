//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene
*/

#include <stdio.h>

int main() {
    int s1, s2, s3;

    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 == s2 && s2 == s3) {
        printf("Equilateral\n");
    }
    else if (s1 == s2 || s2 == s3 || s1 == s3) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }
    return 0;
}

//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday
*/

#include <stdio.h>
int main()
{
    int day;
    printf("Enter number based on user's choice from 1-7: ");
    scanf("%d", &day);
    switch (day)
    {
        case 1 : printf("Monday");
                break;
        case 2 : printf("Tuesday");
                break;
        case 3 : printf("Wednesday");
                break;
        case 4 : printf("Thursday");
                break;
        case 5 : printf("Friday");
                break;
        case 6 : printf("Saturday");
                break;
        case 7 : printf("Sunday");
                break;
        default : printf("Not a valid day");
                break;
    }
    return 0;
}

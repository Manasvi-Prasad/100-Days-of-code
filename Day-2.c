//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20
*/

#include <stdio.h>
int main () {

  float l, b, area, perimeter;
  printf("enter the length\n");
  scanf("%f", &l);
  printf("enter the breadth\n");
  scanf("%f", &b);
  
  area = l*b;
  perimeter = 2*(l + b);

  printf("the area is %f\n the perimeter is %f\n", area , perimeter);
  return 0;
}

//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h> 
int main() {
    
    double radius, area, circumference;
    const double PI = 3.14;
    
    printf("Please enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    return 0;
}

// Q53: Write a program to print the following pattern:
/*
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include <stdio.h>
int main(){
    // upper part
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= (2*i - 1); j++){
            printf("*");
        }
        printf("\n");
    }

    // lower part
    for(int i = 4; i >= 1; i--){
        for(int j = 1; j <= (2*i - 1); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}



// Q54: Write a program to print the following pattern:
/*
   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Input: (No input)

Output:
   *
  ***
 *****
*******
 *****
  ***
   *

*/

#include <stdio.h>
int main(){

    // Top part including middle
    for(int i = 1; i <= 4; i++){
        for(int s = 4 - i; s > 0; s--){
            printf(" ");
        }
        for(int j = 1; j <= (2*i - 1); j++){
            printf("*");
        }
        printf("\n");
    }

    // Bottom part
    for(int i = 3; i >= 1; i--){
        for(int s = 4 - i; s > 0; s--){
            printf(" ");
        }
        for(int j = 1; j <= (2*i - 1); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


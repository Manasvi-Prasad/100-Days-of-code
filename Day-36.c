// Q71: Read and print a matrix.
/*
Sample Test Cases:

Input 1:
2 2
1 2
3 4

Output 1:
1 2
3 4
*/

#include <stdio.h>
int main(){
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("Enter elements:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}



// Q72: Find the sum of all elements in a matrix.
/*
Sample Test Cases:

Input 1:
2 3
1 2 3
4 5 6

Output 1:
21
*/

#include <stdio.h>
int main(){
    int r, c, sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("Enter elements:\n");

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("%d", sum);
    return 0;
}

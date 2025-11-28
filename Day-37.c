// Q73: Find the sum of each row of a matrix and store it in an array.
/*
Sample Test Cases:

Input 1:
2 3
1 2 3
4 5 6

Output 1:
6 15
*/

#include <stdio.h>
int main(){
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c], sum[r];
    printf("Enter elements:\n");

    for(int i = 0; i < r; i++){
        sum[i] = 0;
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
            sum[i] += arr[i][j];
        }
    }

    for(int i = 0; i < r; i++)
        printf("%d ", sum[i]);

    return 0;
}



// Q74: Find the transpose of a matrix.
/*
Sample Test Cases:

Input 1:
2 3
1 2 3
4 5 6

Output 1:
1 4
2 5
3 6
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

    for(int j = 0; j < c; j++){
        for(int i = 0; i < r; i++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

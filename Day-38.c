// Q75: Add two matrices.
/*
Sample Test Cases:

Input 1:
2 2
1 2
3 4
2 2
5 6
7 8

Output 1:
6 8
10 12
*/

#include <stdio.h>
int main(){
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c];
    printf("Enter first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }

    return 0;
}



// Q76: Check if a matrix is symmetric.
/*
Sample Test Cases:

Input 1:
2 2
1 2
2 1

Output 1:
True

Input 2:
2 2
1 0
2 1

Output 2:
False
*/

#include <stdio.h>
int main(){
    int r, c, flag = 1;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] != arr[j][i])
                flag = 0;
        }
    }

    if(flag)
        printf("True");
    else
        printf("False");

    return 0;
}

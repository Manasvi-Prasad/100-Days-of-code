// Q79: Perform diagonal traversal of a matrix.
/*
Sample Test Cases:

Input 1:
3 3
1 2 3
4 5 6
7 8 9

Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>
int main(){
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    int i = 0, j = 0, up = 1;
    while(i < r && j < c){
        printf("%d ", arr[i][j]);

        if(up){
            if(i == 0 || j == c - 1){
                up = 0;
                if(j < c - 1) j++;
                else i++;
            } else {
                i--; j++;
            }
        } else {
            if(j == 0 || i == r - 1){
                up = 1;
                if(i < r - 1) i++;
                else j++;
            } else {
                i++; j--;
            }
        }
    }

    return 0;
}



// Q80: Multiply two matrices.
/*
Sample Test Cases:

Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12

Output 1:
58 64
139 154
*/

#include <stdio.h>
int main(){
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    int res[r1][c2];

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            res[i][j] = 0;
            for(int k = 0; k < c1; k++)
                res[i][j] += a[i][k] * b[k][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}

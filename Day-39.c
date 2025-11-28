// Q77: Check if the elements on the diagonal of a matrix are distinct.
/*
Sample Test Cases:

Input 1:
3 3
1 2 3
4 5 6
7 8 1

Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9

Output 2:
True
*/

#include <stdio.h>
int main(){
    int r, c, unique = 1;
    scanf("%d %d", &r, &c);

    int arr[r][c], diag[r];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    for(int i = 0; i < r; i++){
        diag[i] = arr[i][i];
    }

    for(int i = 0; i < r; i++){
        for(int j = i+1; j < r; j++){
            if(diag[i] == diag[j])
                unique = 0;
        }
    }

    if(unique) printf("True");
    else printf("False");

    return 0;
}



// Q78: Find the sum of main diagonal elements of a matrix.
/*
Sample Test Cases:

Input 1:
3 3
1 2 3
4 5 6
7 8 9

Output 1:
15
*/

#include <stdio.h>
int main(){
    int r, c, sum = 0;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    for(int i = 0; i < r; i++)
        sum += arr[i][i];

    printf("%d", sum);
    return 0;
}

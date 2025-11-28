// Q67: Insert an element in an array at a given position.
/*
Sample Test Cases:

Input 1:
4
10 20 30 40
2 15

Output 1:
10 20 15 30 40
*/

#include <stdio.h>
int main(){
    int n, pos, val;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n+1];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position and value: ");
    scanf("%d %d", &pos, &val);

    for(int i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;

    for(int i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}



// Q68: Delete an element from an array.
/*
Sample Test Cases:

Input 1:
5
1 2 3 4 5
2

Output 1:
1 2 4 5
*/

#include <stdio.h>
int main(){
    int n, pos;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(int i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }

    for(int i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);

    return 0;
}

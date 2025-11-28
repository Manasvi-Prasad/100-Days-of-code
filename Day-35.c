// Q69: Find the second largest element in an array.
/*
Sample Test Cases:

Input 1:
5
10 20 30 40 50

Output 1:
40
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max1 = arr[0], max2 = -999999;

    for(int i = 1; i < n; i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }

    printf("%d", max2);
    return 0;
}



// Q70: Rotate an array to the right by k positions.
/*
Sample Test Cases:

Input 1:
5
1 2 3 4 5
2

Output 1:
4 5 1 2 3
*/

#include <stdio.h>
int main(){
    int n, k;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter rotation value: ");
    scanf("%d", &k);

    k = k % n;
    printf("Rotated array: ");

    for(int i = n - k; i < n; i++)
        printf("%d ", arr[i]);

    for(int i = 0; i < n - k; i++)
        printf("%d ", arr[i]);

    return 0;
}

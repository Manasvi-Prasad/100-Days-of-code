// Q61: Search for an element in an array using linear search.
/*
Sample Test Cases:

Input 1:
5
1 2 3 4 5
3

Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25

Output 2:
-1
*/

#include <stdio.h>
int main(){
    int n, key, index = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter key: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            index = i;
            break;
        }
    }

    if(index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}



// Q62: Reverse an array without taking extra space.
/*
Sample Test Cases:

Input 1:
4
1 2 3 4

Output 1:
4 3 2 1
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0, j = n-1; i < j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

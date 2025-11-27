// Q59: Count even and odd numbers in an array.
/*
Sample Test Cases:

Input 1:
6
1 2 3 4 5 6

Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8

Output 2:
Even=4, Odd=0
*/

#include <stdio.h>
int main(){
    int n, even = 0, odd = 0;
    
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d", even, odd);
    return 0;
}



// Q60: Count positive, negative, and zero elements in an array.
/*
Sample Test Cases:

Input 1:
5
-1 0 1 2 -2

Output 1:
Positive=2, Negative=2, Zero=1
*/

#include <stdio.h>
int main(){
    int n, pos=0, neg=0, zero=0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d", pos, neg, zero);
    return 0;
}

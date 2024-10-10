// create a programme that will find the second largest number in an array //
// second Largest in arrray //
// code by shashi //
#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    int first, second;

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    first = second = -2147483648;  // Smallest possible integer

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -2147483648) {
        printf("There is no second largest element.\n");
        return -1;
    }

    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest != -1) {
        printf("The second largest element is: %d\n", secondLargest);
    }
    
    return 0;
}

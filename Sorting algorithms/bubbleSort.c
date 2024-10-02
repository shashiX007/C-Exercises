#include <stdio.h>

int main() {
    int arr[10] = {9, 2, 3, 1, 7, 6, 4, 8, 5, 0};//declaring the array

    for (int i = 0; i < 10 - 1; i++) {//intialising a loop
        for (int j = 0; j < 10 - 1 - i; j++) {//intialising another loop
            if (arr[j] > arr[j + 1]) { // comparing two indeces of the array
                int temp = arr[j]; // declaring a temporary number
                arr[j] = arr[j + 1]; //swapig the numbers
                arr[j + 1] = temp;//assigning the temporary number
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);//printing the array
    }
    printf("\n");

    return 0;
}


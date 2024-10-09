#include <stdio.h>

int main() {
    int arr[10] = {9, 2, 3, 1, 7, 6, 4, 8, 5, 0};

    // Selection sort algorithm
    for (int i = 0; i < 10; i++) {
        int minIndex = i;//assuming the index of the min number 
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];//declaring a temporary number
        arr[minIndex] = arr[i];//swaping the numbers
        arr[i] = temp;//assigning the temporary number 
    }

    // Print the sorted array
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


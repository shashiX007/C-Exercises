#include <stdio.h>

void modifyArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) += i; // Line A
    }
    arr = arr + 2;       // Line B
    *arr = 100;          // Line C
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);

    modifyArray(array, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}


// What will the program output?Explain why the change made in Line C doesn't persist outside the function.How can you modify the function so that changes made to the pointer (arr) persist in main()? //

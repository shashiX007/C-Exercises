#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr1 = arr;
    int *ptr2 = arr + 4;

    printf("Initial Difference: %ld\n", ptr2 - ptr1); // Line A

    ptr1 += 2;
    ptr2 -= 2;

    printf("After Modification: %ld\n", ptr2 - ptr1); // Line B

    *ptr1 += *(ptr2 - 1); // Line C

    printf("Value at ptr1: %d\n", *ptr1); // Line D

    return 0;
}

// What will the program output at Line A, Line B, and Line D? Explain the pointer arithmetic and how it affects the program’s behavior. How can you ensure the program doesn't result in undefined behavior if pointer arithmetic goes beyond the array bounds? //

#include <stdio.h>
#include <stdlib.h>

void modifyPointer(int **p) {
    int *temp = (int *)malloc(sizeof(int));
    *temp = 50;
    *p = temp; // Line A
}

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 100;

    modifyPointer(&ptr); // Call the function

    printf("Value of *ptr: %d\n", *ptr); // Line B

    free(ptr); // Free the memory
    printf("Value of *ptr after free: %d\n", *ptr); // Line C

    return 0;
}


// What will the program output at Line B and Line C? Explain what happens to ptr and the memory it points to during the function call and after free() is executed. Is this code safe? If not, why? //

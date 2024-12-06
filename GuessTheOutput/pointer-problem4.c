#include <stdio.h>

void swap(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    int *ptr1 = &x, *ptr2 = &y;

    swap(ptr1, ptr2);

    printf("Value of x: %d\n", *ptr1);
    printf("Value of y: %d\n", *ptr2);

    return 0;
}


// What will the program output? Why doesn't swap() change the values of ptr1 and ptr2 in main()? How can you fix swap() to correctly swap the values pointed to by ptr1 and ptr2?

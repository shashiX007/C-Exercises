#include <stdio.h>

void modify(int *p, int **q, int ***r) {
    ***r = **q + *p; // Line A
    **q = *p * 2;    // Line B
    *p = ***r - 1;   // Line C
}

int main() {
    int a = 5, b = 10, c = 15;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;

    int **pptr2 = &ptr2;
    int ***pptr3 = &pptr2;

    modify(ptr1, pptr2, pptr3);

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}

// What will be the output of the program? Explain how the values of a, b, and c are calculated in each step. //

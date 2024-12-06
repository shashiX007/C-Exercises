#include <stdio.h>

void process(int *p, int *q) {
    p = q;          // Line A
    *p = *p + 10;   // Line B
}

int main() {
    int a = 5, b = 15;
    int *ptr1 = &a;
    int *ptr2 = &b;

    process(ptr1, ptr2); // Call the function

    printf("a = %d, b = %d\n", a, b);
    return 0;
}


// What will be the output of the program? Explain why a and b have their respective final values.//

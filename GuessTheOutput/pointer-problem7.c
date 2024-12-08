#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[] = "hello";
    reverse(str);

    printf("Reversed String: %s\n", str); // Line A

    char *str2 = "world"; // String literal
    reverse(str2);

    printf("Reversed Literal: %s\n", str2); // Line B

    return 0;
}


//What will the program output at Line A and Line B? Why does the program behave differently for str and str2? How can the program be modified to handle string literals safely?






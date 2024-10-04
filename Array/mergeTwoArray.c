//create a programme that will take two array as input from the user and them both//
//merge two array//
///code by shashi//
#include <stdio.h>

int main() {
    int n1, n2, i;
    
    // Input the size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    
    // Input elements of the first array
    printf("Enter the elements of the first array: \n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Input the size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    
    // Input elements of the second array
    printf("Enter the elements of the second array: \n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int merged[n1 + n2];
    
    // Merging the arrays
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    
    // Displaying the merged array
    printf("Merged array: \n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    
    return 0;
}

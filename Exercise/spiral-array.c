//write a code in c that will take an input c from user and create a 2k+1×2k+1 2D array and fill it in a spiral pattern according to the specified directions, starting with 1 at the center.//

/* Expected output 
Enter an integer k (0 <= k <= 10): 3
Spiral Array:
 49  48  47  46  45  44  43 
 26  25  24  23  22  21  42 
 27  10   9   8   7  20  41 
 28  11   2   1   6  19  40 
 29  12   3   4   5  18  39 
 30  13  14  15  16  17  38 
 31  32  33  34  35  36  37  
  */
// Code by shashi //
#include <stdio.h>

void fillSpiral(int n, int array[n][n]) {
    int x = n / 2; // starting center row
    int y = n / 2; // starting center column
    int value = 1; // starting value
    int step = 1;  // spiral step

    array[x][y] = value; // center element is 1
    value++;

    while (value <= n * n) {
        // Left (step times)
        for (int i = 0; i < step && value <= n * n; i++) {
            y -= 1;
            array[x][y] = value++;
        }
        // Down (step times)
        for (int i = 0; i < step && value <= n * n; i++) {
            x += 1;
            array[x][y] = value++;
        }
        step++; // increase step count after left-down pair

        // Right (step times)
        for (int i = 0; i < step && value <= n * n; i++) {
            y += 1;
            array[x][y] = value++;
        }
        // Up (step times)
        for (int i = 0; i < step && value <= n * n; i++) {
            x -= 1;
            array[x][y] = value++;
        }
        step++; // increase step count after right-up pair
    }
}

int main() {
    int k;
    printf("Enter an integer k (0 <= k <= 10): ");
    scanf("%d", &k);

    if (k < 0 || k > 10) {
        printf("Invalid input. k should be between 0 and 10.\n");
        return 1;
    }

    int n = 2 * k + 1;
    int array[n][n];

    // Initialize array with zeros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = 0;
        }
    }

    // Fill the array in a spiral pattern
    fillSpiral(n, array);

    // Print the array
    printf("Spiral Array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

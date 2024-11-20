#include<stdio.h>

int mySqrt(int x) {
    if (x < 2) {
        return x;  // Handle edge cases for 0 and 1
    }

    int low = 0, high = x, result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoid potential overflow in (low + high)
        
        if (mid > x / mid) { // Use division to prevent overflow
            high = mid - 1;  // Narrow the search range to the left
        } else {
            result = mid;    // Update the result since mid^2 <= x
            low = mid + 1;   // Narrow the search range to the right
        }
    }

    return result; // The result contains the largest integer whose square <= x
}

int main(){
  int x;
  printf("Enter a number : ");
  scanf("%d ", &x);
  result = mySqrt(x);
  print("sqrt is %d ", x);
  return 0;
}

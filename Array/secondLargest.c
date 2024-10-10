// create a programme that will find the second largest number in an array //
// second Largest in arrray //
// code by shashi //

 #include<stdio.h>

int main() {
    int size;
    
    // Prompting user to enter the size of the array
    printf("Enter the size of the array: ");
    // Reading the size of the array
    scanf("%d", &size);
    
    // Checking if array size is at least 2, since we need at least two numbers
    if(size < 2) {
        printf("Array must have at least two elements.");
        return 1;  // Exit the program if size is less than 2
    }
    
    int arr[size];  // Declaring an array of the given size
    
    // Loop to take input for each element of the array
    for (int i = 0; i < size; i++) {
        printf("Enter number %d: ", i + 1);  // Prompting user for array elements
        scanf("%d", &arr[i]);  // Reading and storing elements in the array
    }

    int largest, secondLargest;

    // Initialize largest and secondLargest based on the first two elements
    if (arr[0] > arr[1]) {
        largest = arr[0];       // If arr[0] is larger, set it as largest
        secondLargest = arr[1];  // Set arr[1] as second largest
    } else {
        largest = arr[1];       // If arr[1] is larger, set it as largest
        secondLargest = arr[0];  // Set arr[0] as second largest
    }

    // Loop through the rest of the array starting from index 2
    for (int i = 2; i < size; i++) {
        // If the current element is greater than the largest
        if (arr[i] > largest) {
            secondLargest = largest;  // Previous largest becomes second largest
            largest = arr[i];         // Update largest to the current element
        }
        // If the current element is not the largest but is greater than secondLargest
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];  // Update second largest to the current element
        }
    }

    // Output the largest and second largest elements
    printf("Largest in array is %d and second largest in array is %d.\n", largest, secondLargest);
    
    return 0;  // End of the program
}

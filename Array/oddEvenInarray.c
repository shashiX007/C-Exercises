//create a programme to ientify odd and even numbers in array //
// odd and even //
// code by shashi //
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    int sum;
    int even;
    for (int i = 0; i < size; i++){
        printf("Enter the %d array: ",i+1);
        scanf("%d",&arr[i]);
        if (arr[i] % 2 == 0){
            even += 1;
        }
        }
    printf("Even numbers : %d, Odd numbers : %d", even, size-even);
    return 0;
}

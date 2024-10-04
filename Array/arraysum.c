//creeate a code to calculate the sum of all numbers in an array //
//code by shashi//

#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    int sum;
    for (int i = 0; i < size; i++){
        printf("Enter the %d array: ",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];  //smart approach 
        }
    /*for (int i = 0; i < size; i++){ //maybe an stupid appproach discomment if want to use 
        sum += arr[i];
    }*/
    printf("Sum of the numbers in array is %d",sum);
    return 0;
}

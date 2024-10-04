//create a programme that will take an array as input from user and then reverse it //
//reverse an array //
//code by shashi//
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
        printf("Enter the %d number : ", i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0, j = size-1; i < j; i++,j--){
        int num = arr[i];
        arr[i] = arr[j];
        arr[j] = num;
    }
    printf("Reversed array : ");
    for (int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

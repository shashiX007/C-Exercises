//create a programme to find the minimum and maximum number in an array//
//min and max//
//code by shashi//
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    
    for(int i = 0; i < size; i++){
        printf("Enter the %d number : ",i+1);
        scanf("%d",arr[i]);
    }
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] > max){
            max = arr[i];
        }else if (arr[i] < min){
            min = arr[i];
        }
    }
    printf("min = %d max = %d", min, max);
    return 0;
}

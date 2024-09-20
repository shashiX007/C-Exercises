//code by shashikant//
#include<stdio.h>
int main(){
    int size;
    printf("Enter the length of array : ");
    scanf("%d",&size);
    int arr[size];
    int numberToRemove;

    for (int i = 0; i < size;i++){
        printf("Enter %d number : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to remove : ");
    scanf("%d",&numberToRemove);
    int index = -1;
    for (int i = 0; i < size; i++){
        if (arr[i] == numberToRemove){
            index = i;
        }
    }
    if (index == -1){
        printf("Number doesnot exist in the array");
    }
    else{
        for (int i = index;i < size -1;i++){
            arr[i] = arr[i + 1];
    }
    size--;
    for (int i = 0;i < size;i++){
        printf("%d ",arr[i]);
    }
    }
}

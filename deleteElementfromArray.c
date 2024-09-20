#include<stdio.h>
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int numberToRemove = 7;
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

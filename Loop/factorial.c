// create a programme in python that will calculte factorial of a number in c //
// factorial //
//code by shashi //
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++){
        num = num * i;
    }
    printf("%d",num);
    return 0;
}

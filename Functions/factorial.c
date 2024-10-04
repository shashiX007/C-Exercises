// create a code that will do factorials by creating  a function name factorial//
// factorials //
// code by shashi //
#include<stdio.h>
int factorial(int x){
    if (x == 0 || x == 1){
        return 1;
    }else{
        return x * factorial(x - 1);
    }
}
int main(){
    int num,result;
    printf("Enter the numebr : ");
    scanf("%d",&num);
    result = factorial(num);
    printf("%d",result);
    return 0;
}

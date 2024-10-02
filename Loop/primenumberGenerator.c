//write  a code in c that will take a number as an input from a user and then generate prime numbers from 2 to till this number //
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num < 2){
        printf("No prime exist for a number less than 2 ");
    }
    for (int i = 2; i <= num; i++){
        int isPrime = 1;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime){
            printf("%d ",i);
        }
    }
    return 0;
}

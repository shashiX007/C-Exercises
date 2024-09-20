// create a code that will take a number n as input and then then calculate the series sum (like 1 + 2 + 3 + 4 + ..... + n ) and square sum ( like 1^2  + 2^2 + 3^2 + 4^2 + ..... + n^2) and then also calculate sum of its digit and then print these reults  //
// code fro the above problem //
// code by shashi //

#include<stdio.h>
int main(){
    int num;
    printf("Enter a three digit number : ");
    scanf("%d",&num);
    int sum1 = (num * (num + 1)) / 2;
    int sum2 = (num * (num + 1) * (2*num + 1)) / 6;
    int unit_digit = num / 100;
    int tenth_digit = num / 10 - (unit_digit * 10);
    int hundredth_digit = num - (unit_digit * 100 - tenth_digit * 10);
    printf("sum1 is %d sum2 is %d and sum of its digits is %d ", sum1, sum2, unit_digit + tenth_digit + hundredth_digit);
    return 0;
}

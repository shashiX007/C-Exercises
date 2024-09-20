#include<stdio.h>
int main(){
  int number, reversed = 0, remainder;
  printf("Enter your number : ");
  scanf("%d",&number);
  while (number != 0){
    remainder = number % 10;
    reversed = reversed * 10 + remainder;
    number /= 10;
  }
  printf("reversed number :  %d ",reversed);
  return 0;
}

// create a programme to whether a number is odd or even that is taken as input from the user //
// checking a number to be odd or even //
// codee by shashikant //
#include<stdio.h>
int main(){
  int number;
  printf("Enter the number : ");
  scanf("%d",&number);
  if (number % 2 == 0){
    printf("number is even");
  }
  else{
    printf("print number is odd");
  }
  return 0;
}

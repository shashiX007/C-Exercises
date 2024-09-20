// create a programme to calculate boh area and parameter of a circle by taking its radius from user as input and then print the final result //
// Calculating area of circle // 
// code by shashi//
#include<stdio.h>
int main(){
  float pi = 3.14;
  float radius;
  printf("Enter the radius of circle : ");
  scanf("%f",&radius);
  float area = pi * radius * radius;
  float parameter = 2 * pi * radius;
  printf("Area of circle is %f and parameter of circle is %f",area,parameter);
  return 0;
}

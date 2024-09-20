// create a code to calculate the volume of a sphere by using its radius and then print the final result //
// calculating the area of sphere code by shashi //
// code by shashi //

#include<stdio.h>
int main(){
    float pi = 3.14;
    float radius;
    printf("Enter the radius of sphere : ");
    scanf("%f",&radius);
    float volume = (4 * pi * radius * radius)/3;
    printf("Volume of sphere is %f",volume);
    return 0;
}

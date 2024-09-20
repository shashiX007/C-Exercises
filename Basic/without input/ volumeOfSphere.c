// Getting volume of sphere //
//code by shashikant//

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

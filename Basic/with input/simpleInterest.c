// create a programme to calculate simple interest interest by the basic formula and then print the interest and totsl payable amount //
// code to calculate simple interest //
// code by shashikant //

#include<stdio.h>
int main(){
    float principle, rate, time;//  principal is in rupees , rate is in percent , time is in years 
    printf("Enter principle amount : ");
    scanf("%f",&principle);
    printf("Enter rate  : ");
    scanf("%f",&rate);
    printf("Enter time : ");
    scanf("%f",&time);
    float interest = (principle * rate * time ) / 100;
    printf("Interest is %.2f\n", interest);
    printf("Total Amount %.2f", principle + interest);
    return 0;
}

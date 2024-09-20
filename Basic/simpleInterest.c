// create a programme to calculate simple interest interest by the basic formula and then print the interest and totsl payable amount //
// code to calculate simple interest //
// code by shashikant //

#include<stdio.h>
int main(){
    float principal = 10000 ,rate = 2, time = 2;//  principal is in rupees , rate is in percent , time is in years 
    float interest = (principal * rate * time ) / 100;
    printf("Interest is %f\n", interest);
    printf("Total Amount %f", principal + interest);
    return 0;
}

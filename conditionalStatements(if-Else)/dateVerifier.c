//Write a code to vrify that take a date as an input from user and then check wether it is correct or incorrect Hint : use the concept of lesp yesr //
#include<stdio.h>
int main(){
    int day, month, year;
    printf("Enter dath as DD MM YYYY (eg. 12 05 2007) : ");
    scanf("%d %d %d", &day, &month, &year);
    if (month == 2){
        if (year % 4 == 0){
            if (day <= 29 && day >= 1){
                printf("Entered date is correct ");
            }else{
                printf("date is incorrect");
            }
        }else{
            if (day <= 28 && day >= 1){
                printf("Entered date is correct ");
            }else{
                printf("Entered date is incorrect ");
            }
        }
    }else{
        if (month == 01 || month == 03 || month == 05 || month == 07 || month == 10 || month == 12){
            if (day <= 31 && day >=1){
                printf("Entered date is correct ");
            }else{
                printf("entered date is incorrect ");
            }
        }else{
            if (day <= 30 && day >= 1){
                printf("Entered date id correct ");
            }
            else{
                printf("Entered date is incorrect ");
            }
        }
    }
    return 0;
}

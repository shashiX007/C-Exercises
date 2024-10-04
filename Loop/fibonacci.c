// create a programe that number of terms of fibonacci series from the user and then write the series till there //
// fibonacci //
//code by shashi//

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    int a = 0, b = 1, c;
    printf("%d %d ",a,b);
    for (int i = 0; i < num; i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d ",c);
    }
    return 0;
}

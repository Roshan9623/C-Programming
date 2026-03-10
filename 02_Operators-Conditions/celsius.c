#include<stdio.h>
    
    int main(){

        int celsius;
        printf("enter value of celsius: ");
        scanf("%d",& celsius);

        int fah=(celsius * 9/5)+32;
        printf("%df",fah);

    return 0;
}
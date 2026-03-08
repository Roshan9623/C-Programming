#include<stdio.h>
    int main(){

        int a;
        printf("enter first side : ");
        scanf("%d",& a);

        int b;
        printf("enter second side : ");
        scanf("%d",& b);


        int  area = (1.732 / 4) * a * b ;
        printf("third angle of area is  : %d",area);


        return 0;
    }
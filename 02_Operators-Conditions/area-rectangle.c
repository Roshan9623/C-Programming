#include<stdio.h>
    int main(){

       int length;
       printf("enter a length : ");
       scanf("%d",& length);

       int breadth;
       printf("enter a breadth: ");
       scanf("%d",& breadth);

       int area = length*breadth;

        printf(" the rectangle of area is : %d",area);

        return 0;
    }
#include <stdio.h>
    int main (){

            int n, first, last;
            printf("enter a number : ");
            scanf("%d", & n );

              first = n/100;
              last = n % 10;

            printf("first no : %d \n last no : %d",first,last);
           

        return 0;
    }
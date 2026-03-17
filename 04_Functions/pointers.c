#include <stdio.h>
    int main(){

        int a;
        printf("enter num : ");
        scanf("%d",& a);
        
        int* x = & a;

        printf("%d",* x);


        return 0;
    }
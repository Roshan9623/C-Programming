#include <stdio.h>
    int main(){

        int a=5;
        printf("enter a: ");
        scanf("%d",& a);

        int b=6;
        printf("enter b: ");
        scanf("%d",& b);
        
        a=a+b;                          //int temp=a;
        b=a-b;               //or//    //a=b;  
        a=a-b;                        // b=temp; 

        printf(" The value a is : %d\n", a);
        printf(" The value b is : %d", b);

        return 0;
    }
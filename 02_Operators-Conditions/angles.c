#include<stdio.h>

    int main(){

        int angle1;

        printf("first angle : ");
        scanf("%d",& angle1);

        int angle2;

        printf("second angle : ");
        scanf("%d",& angle2);

        int thirdangle= 180-(angle1+angle2);
        printf("%d degree", thirdangle);



        return 0;
    }
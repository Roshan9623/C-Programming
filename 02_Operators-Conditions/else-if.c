#include <stdio.h>

    int main(){

        int  sp;
        printf("enter a selling price : ");
        scanf("%d",& sp);

        int cp;
        printf("enter a cost price : ");
        scanf("%d", & cp);

        if(sp > cp){
            printf("profit");
        }
        else if (cp > sp){
            printf("loss");
        }
        else{
            printf(" no profit and no loss  ");
        }

        return 0;
    }
#include <stdio.h>
    int main (){

        int n;
        printf("enter row : ");
        scanf("%d", & n);

        int m;
        printf("enter column : ");
        scanf("%d",& m);

        for(int i=1;i<=n;i++){
            for(int i=1;i<=m;i++){
               printf("*"); 
            }
            printf("\n");
        }
        
    
    return 0;
}

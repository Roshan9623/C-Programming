#include<stdio.h>

int main(){
    
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    
    int sum;
    int temp=num;
    num=num*num; // 81
    
    while(num!=0){
        int rem=num%10; // 1    --> 8
        sum+=rem; // 1+8=9
        num=num/10; //8 
    }

    printf(temp==sum?"Neon Num":"Not Neo Num");

    return 0;
}
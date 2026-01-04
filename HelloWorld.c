#include<stdio.h>
void main()
{
	int a = 10;
	int b = 20;
	printf("Before Swapping");
	printf("\nA= %d",a);
	printf("\nB= %d",b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter Swapping");
	printf("\nA= %d",a);
	printf("\nB= %d",b);
}
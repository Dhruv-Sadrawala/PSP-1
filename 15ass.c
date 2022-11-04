#include<stdio.h>
void main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if (n==0)
		printf("%d is 0\n",n);
	if (n>0)
		printf("%d is positive number\n",n);
	else
	printf("%d is negative number\n",n);
	}
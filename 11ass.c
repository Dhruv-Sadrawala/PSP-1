#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter the first number: ");
	scanf("%d",&n1);
	printf("Enter the second number: ");
	scanf("%d",&n2);
	if (n1>n2)
		printf("%d is greater\n",n1);
	else
		printf("%d is greater\n",n2);
}
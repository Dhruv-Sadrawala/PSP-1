#include<stdio.h>
void main(){
	int n1,n2,n3;
	printf("Enter the first value: ");
	scanf("%d",&n1);
	printf("Enter the second value: ");
	scanf("%d",&n2);
	n3=n1;
	n1=n2;
	n2=n3;
	printf("First value: %d\n",n1);
	printf("Second value: %d\n",n2);
	}
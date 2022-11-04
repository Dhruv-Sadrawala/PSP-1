#include<stdio.h>
void main(){
	int n1,n2,n3,n4,n5,ave;
	printf("Enter five numbers: ");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	ave=(n1+n2+n3+n4+n5)/5;
	printf("The average of five numbers is: %d\n",ave);
	}
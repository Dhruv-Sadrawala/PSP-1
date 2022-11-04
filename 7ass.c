#include<stdio.h>
void main(){
	int n;
	float p,r,i;
	printf("Enter the principal amount: ");
	scanf("%f",&p);
	printf("Enter the rate of interest: ");
	scanf("%f",&r);
	printf("Number of years: ");
	scanf("%d",&n);
	i=p*r*n/100;
	printf("The simple interest is: %f\n",i);
	}
#include<stdio.h>
void main(){
	float a,b,area;
	printf("Enter the height of triangle: ");
	scanf("%f",&a);
	printf("Enter the base of triangle: ");
	scanf("%f",&b);
	area=(b*a)/2;
	printf("The area of triangle is: %f\n",area);
	}
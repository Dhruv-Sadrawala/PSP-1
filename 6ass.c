#include<stdio.h>
void main(){
	float length,breath,perimeter;
	printf("Enter the length of rectangle: ");
	scanf("%f",&length);
	printf("Enter the breath of rectangle: ");
	scanf("%f",&breath);
	perimeter=length+breath+length+breath;
	printf("Perimeter of rectangle is: %f\n",perimeter);
	}
#include<stdio.h>
void main(){
	int y;
	printf("Enter a year: ");
	scanf("%d",&y);
	if (y%4==0)
		printf("%d is a leap year\n",y);
	else
		printf("%d is not aleap year\n",y);
}
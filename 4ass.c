#include <stdio.h>
void main(){
	int dividend,divisor,remainder,quotient;
	printf("Enter the dividend");
	scanf("%d",&dividend);
	printf("Enter the divisor");
	scanf("%d",&divisor);
	remainder=dividend%divisor;
	quotient=dividend/divisor;
	printf("The remainder is: %d\n",remainder);
	printf("The quotient is: %d\n",quotient);
}
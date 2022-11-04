#include <stdio.h>
void main(){
float centigrade,fahrenheit;
printf("Enter the fahrenheit: ");
scanf("%f",&fahrenheit);
centigrade=(fahrenheit - 32)*5/9;
printf("Centigrade is %f\n",centigrade);


}
//Convert Celsius to Fahrenheit.
#include<stdio.h>
int main(){
	float celsius;
	
	printf("Enter the temperature in cessius :");
	scanf("%f",& celsius);
	
	float fahrenheit =  (celsius*9/5)+32 ;
	
	printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);
	
	return 0;
}

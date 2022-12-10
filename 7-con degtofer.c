#include<stdio.h>
main()
{
	float celsius,Fahrenheit;
	printf("enter a celsius=");
	scanf("%f",&celsius);
	
	Fahrenheit =( Celsius * 9 / 5 ) + 32;
	printf("%.2f Celsius = %.2f Fahrenheit=%f", celsius, Fahrenheit);

}

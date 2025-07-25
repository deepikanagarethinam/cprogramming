#include<stdio.h>
int main()
{
	int celsius,fahrenheit;
	printf("enter the value for celcius:");
	scanf("%d",&celsius);

    fahrenheit=(celsius*1.8)+32; //celsius to fahrenheit
	printf("fahrenheit=%d",	fahrenheit);
	celsius=(fahrenheit-32)/1.8;// fahrenheit to celsius
	printf("\ncelsius=%d",celsius);
} 


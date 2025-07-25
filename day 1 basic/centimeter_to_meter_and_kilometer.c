#include<stdio.h>
int main()
{
	int cm;//centimeter
	float meter,kilometer;
	printf("enter the value for cm:");
	scanf("%d",&cm);
	meter=(float)cm/100;
	kilometer=(float)cm/100000;
	printf("\nmeter=%0.1f m",meter);
	printf("\nkilometer=%f km",kilometer);
	
}

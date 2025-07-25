#include<stdio.h>
int main()
{
	float r;   // r = radius 
	float diameter,area,circumference;
	printf("enter the value for r:");
	scanf("%f",&r);
	
	
	diameter=2*r;
	area= 3.14*(r*r);
	circumference=2*3.14*r;
	
	printf("\ndiameter=%f",diameter);
	printf("\narea=%f",area);
	printf("\ncircumference=%f",circumference);
	
}

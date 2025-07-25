#include<stdio.h>
int main()
{
	int a;
	char b;
	float c;
	
	printf("enter the value for a:");
	scanf("%d",&a);

	printf("\nenter the value for c(float):");
	scanf("%f",&c);
	printf("\nenter the character for b:");
	scanf(" %c",&b);
	
	printf("\na:%d",a);
	printf("\nb:%c",b);
	printf("\nc:%f",c);
}

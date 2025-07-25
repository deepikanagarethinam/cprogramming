#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value for a:");
	scanf("%d",&a);
	printf("enter the value for b:");
	scanf("%d",&b);
	
	printf("\naddition=%d",a+b);
	printf("\nsubtraction=%d",a-b);
	printf("\nmultiplication=%d",a*b);
	if(b!=0)
		printf("\ndiv=%d",a/b);
		
	else
		printf("division by zero not allowed");
	
	
}

//  c program to find the least significant bit 
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value for a: ");
	scanf("%d",&a);
	if(a&1)
		printf("%d is set",a);
	else
		printf("%d is not a set",a);
}

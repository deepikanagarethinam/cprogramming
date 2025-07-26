//  c program to find the most significant bit 
#include<stdio.h>
int main()
{
	int a,msb,bits;
	printf("Enter the value for a: ");
	scanf("%d",&a);
	bits=sizeof(a)*8; // 4*8=32
	msb=1<<(bits-1);// 1<<31
	if(a&msb)
		printf("%d is set",a);
	else
		printf("%d is not a set",a);
}

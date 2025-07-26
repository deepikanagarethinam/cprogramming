// check if nbit  is set or not 
#include<stdio.h>
int main()
{
	int a,n_bit,mask;
	printf("Enter the value for a: ");
	scanf("%d",&a);
	printf("Enter the value for nth bit: ");
	scanf("%d",&n_bit);
	mask=1<<(n_bit-1);
	if(a&mask)
		printf(" set",a);
	else
		printf(" not set",a);
}

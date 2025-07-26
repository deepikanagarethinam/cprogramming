// set the n bit 
#include<stdio.h>
int main()
{
	int a,n_bit,mask ,set;
	printf("Enter the value for a: ");
	scanf("%d",&a);
	printf("Enter the value for nth bit: ");
	scanf("%d",&n_bit);
	mask=1<<(n_bit-1);
	set= a|mask;
	printf("%d",set);
}

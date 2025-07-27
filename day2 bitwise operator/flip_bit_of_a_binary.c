#include<stdio.h>
int main()
{
	int num,a;
	printf("enter a number: ");
	scanf("%d",&num);
	printf("before flip : %d",num);
	a=~num;
	printf("after  flip: %d",a);
}

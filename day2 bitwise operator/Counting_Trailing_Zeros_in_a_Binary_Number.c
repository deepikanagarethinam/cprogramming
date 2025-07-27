#include<stdio.h>
int main()
{
	int num,count=0;
	printf("enter a number: ");
	scanf("%d",&num);
	while(!(num&1))
	{
		count++;
		num>>=1;
		
	}
	printf("%d",count);
}

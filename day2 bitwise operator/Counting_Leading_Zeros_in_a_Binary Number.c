#include<stdio.h>
int main()
{
	int num,count=0,mask;
	printf("enter a number: ");
	scanf("%d",&num);
	mask=1<<31;
	while(!(num&mask))
	{
		count++;
		mask>>=1;
		
	}
	printf("%d",count);
}

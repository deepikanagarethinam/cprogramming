#include<stdio.h>
int table(int i,int *n)
{
	return i*(*n);// i is integer n is pointer so integer and pointer cant be the multiplied so we use the ** to multiply 
}
int main()
{
	int a;
	printf("eneter the number:");
	scanf("%d",&a);
	int i,result;
	for(i=1;i<=10;i++)
	{
		result=table(i,&a);
		printf("%d*%d=%d\n",i,a,result);
	}
}

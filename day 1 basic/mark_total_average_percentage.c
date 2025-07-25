#include<stdio.h>
int main()
{
	int a,b,c,d,e,total,average;
	float percentage;
	 printf("enter the tamil mark:");
	 scanf("%d",&a);
	printf("enter the english mark:");
	 scanf("%d",&b);
	printf("enter the maths mark:");
	 scanf("%d",&c);
	printf("enter the science mark:");
	scanf("%d",&d);
	printf("enter the social mark:");
	 scanf("%d",&e);
	 total =a+b+c+d+e;
	 average=total/5;
	 percentage=(total/500.0)*100.0;
	 printf("Total:%d\n",total);
	 printf("Average:%d\n",average);
	 printf("percentage:%f\n",percentage);
	 
}

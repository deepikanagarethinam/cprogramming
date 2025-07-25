#include<stdio.h>
int main()
{
	int l,b;   // l=length ,b=breadth
	int perimeter,area;
	printf("enter the value for l:");
	scanf("%d",&l);
	printf("enter the value for b:");
	scanf("%d",&b);
	
	perimeter=2(l+b);
	area= l*b;
	printf("\nperimeter=%d",perimeter);
	printf("\narea=%d",area);
	
	
}

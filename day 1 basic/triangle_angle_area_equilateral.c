#include<stdio.h>
int main()
{
	// enter two angle and find third angle of triangle 
	int a,b,c;
	printf("enter the value for first angle:");
	scanf("%d",&a);
	printf("enter the value for second angle:");
	scanf("%d",&b);
	c=180-(a+b);
	printf("third angle:%d",c);
	
	// area of triangle  
    int base,height;
    int area ;
    printf("\n*****area of triangle****");
    printf("\nenter the value for base:");
	scanf("%d",&base);
	printf("enter the value for height:");
	scanf("%d",&height);
    area=(base*height)/2;
    printf("area of the triangle:%d",area);
    
  //equilateral triangle
    
    printf("\n****equilateral_triangle****");
    float equilateral_triangle,side;
    printf("\nenter the value for the side:");
    scanf("%f",&side);
    equilateral_triangle=(1.732/4.0)*(pow(side,2));
    printf("equilateral_triangle:%f",equilateral_triangle);
	
}

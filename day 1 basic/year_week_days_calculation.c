#include<stdio.h>
int main()
{
	int total_days,year, week,days,remainder;
	printf("enter the value for total days :");
	scanf("%d",&total_days);
	year=total_days/365;
	remainder=total_days%365;
	week=remainder/7;
	days=remainder%7;
	printf("year:%d\nweek:%d\ndays:%d",year,week,days);
	
	
	
}

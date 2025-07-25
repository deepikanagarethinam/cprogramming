#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,n,SI,CI;
	printf("enter the value for principal:");
	scanf("%f",&p);
	printf("enter the value for rate:");
	scanf("%f",&r);
	r=r/100;
	printf("enter the value for time:");
	scanf("%f",&t);
	printf("enter the value for n:");
	scanf("%f",&n);
	SI=p*r*t;
	CI=p*pow(1+(r/n),(n*t));
	printf("\nsimple interest:%0.2f",SI);
	printf("\ncompound  interest:%0.2f",CI);
}






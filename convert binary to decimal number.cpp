#include<stdio.h>
main()
{
	int n,b,d=0,a=1,r;
	printf("\n Program to convert Binary to decimal \n");
	printf("Enter any Binary Number:\n");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		r=n%10;
		d=d+(r*a);
		n=n/10;
		a=a*2;
	}
	printf("Binary Number: %d is equivalent to %d in Decimal form",b,d);
	
}

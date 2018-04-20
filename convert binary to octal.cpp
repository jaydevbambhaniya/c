//Wap to convert binary to Octal number systemm//
#include<stdio.h>
main()
{
	long int b,o=0,p=1,r,t,d;
	printf("Enter a Binary Number:\n");
	scanf("%ld",&b);
	t=b;
	while(t!=0)
	{
		d=t%100;
		p=1;
		o=0;
		while(d>0)
		{
			r=d%10;
			o=o+(r*p);
			d=d/10;
			p=p*2;
		}
		t/=1000;
		printf("%ld",o);
	}
	
}

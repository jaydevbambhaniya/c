#include<stdio.h>
main()
{
	long n,dnum,remainder,b=1,bnr=0;
	printf("Enter decimal integer\n");
	scanf("%d", & n);
	dnum=n;
	while(n>0)
	{
		remainder=n%2;
		bnr=bnr+remainder*b;
		n=n/2;
		b=b*10;
		
	}
	printf("Binary Equivalent is=%d\n",bnr);
}
	
	
	
	

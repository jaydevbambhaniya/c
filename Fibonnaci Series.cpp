//Wap a C program to print Fibonacci series up to n terms//
#include <stdio.h>
int main()
{
    int lim,a=0,b=1,c,i=1;
    printf("Enter the limit");
	scanf("%d", &lim);
	printf("%d%d",a,b);
	while(i<=lim)
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
		i++;
	}
}
    

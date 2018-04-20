//WAP to find frequency of each digit in a given intger//
#include<stdio.h>
main()
{
	int a[10]={0};
	int n,q=1,r,i;
	printf("\nEnter a Number:");
	scanf("%d",&n);
	while(q!=0)
	{
		q=n/10;
		r=n%10;
		n=q;
		for(i=0;i<=9;i++)
		{
			if(i==r)
			{
				a[i]=a[i]+1;
			}
		}
	 } 
	 for(i=0;i<=9;i++)
	 {
	 	printf("%d occured %d times\n",i,a[i]);
	 }
}

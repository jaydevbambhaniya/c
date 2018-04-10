#include<stdio.h>
main()
{
	int a;
	printf("Enter the salary of Employee");
	scanf("%d",&a);
	if (a>40000)
	printf("Employee will be Senior Manager");
	else if (a>=25000 && a<=40000)
	printf("Employee will be  Manager");
    else if (a>=15000 && a<=25000)
    printf("Employee will be  Assistant Manager");
    else
    printf("Employee will be  Clerk");
}
		

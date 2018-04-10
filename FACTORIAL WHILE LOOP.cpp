

#include<stdio.h>
  main()
 {
    long int i,n,f=1; 
    printf("Enter the value of n \n");
    scanf("%d", &n);
    
    i=1;
    do
    {
       f=i;
       i++;
    }
    while(i<=n);
 
    printf("Factorial = %d\n",f);
    }

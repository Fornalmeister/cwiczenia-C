#include <stdio.h>
#include <stdlib.h>

 Fibonacci(int n)
 {
 	int fib[80],i;
	fib[0]=1;
 	fib[1]=1;
	
 	for(i=2;i<n;i++)
 	{
 	fib[i]=fib[i-1]+fib[i-2];		
	}
 	for (i=0; i<n; i++)
 	{
 		printf("wyraz nr:%d :%d\n",i,fib[i]);	
	}
 }

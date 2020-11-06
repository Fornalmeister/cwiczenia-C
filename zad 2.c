#include <stdio.h>
#include <stdlib.h>

int main()
{
 	int a, b, c, max;
    
    printf("Podaj liczbe a:");
    scanf("%d",&a);
 
    printf("Podaj liczbe b:");
    scanf("%d",&b);
 
    printf("podaj liczbe c:");
    scanf("%d",&c);
	max=a;
	if (b>max) max=b;
	if (c>max) max=c;
	printf("Najwieksza liczba to:%d", max);
	
	
	
	
	/*
	if(a>b && a>c)	
		printf("Najwieksza liczba jest A=%d", a);			
	if(b>a && b>c)	
		printf("Najwieksza liczba jest B=%d", b);	
	if(c>a && c>b)
		printf("Najwieksza liczba jest C=%d", c);
	
	*/
	return 0;

}

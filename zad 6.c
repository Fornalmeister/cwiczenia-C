#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{	
int tablica[20];
int i;
for(i=0;i<=20;i++)
{
	tablica[i]=pow(2,i);
}
for (i=0;i<=20;i++)
	printf("%d liczba wynosi: %d\n",i,tablica[i]);




return 0;
}

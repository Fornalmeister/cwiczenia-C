#include <stdlib.h>
#include <stdio.h>


int main()
{
int tablica[100];
int i=0;
int dlugosc;
printf("Podaj dlugosc tablicy: ");
scanf("%d",&dlugosc);
				  // usun = w while jeœli chcesz pominac 1 wyraz
while(i<=dlugosc) // zaczynamy numeracja tablicy od 0
{
	printf("podaj %d wyraz: ",i);
	scanf("%d",&tablica[i]);
	printf("wyraz %d wynosi: %d \n",i ,tablica[i]);
	i++;	
	
}

return 0;
}

/*
for(i=0;i<=dlugosc;i++)
{
	printf("Podaj %d tablicy: ",i);
	scanf("%d",tablica[i]);
	printf("%d element tablicy %d",i, tablica[i]);
}
*/



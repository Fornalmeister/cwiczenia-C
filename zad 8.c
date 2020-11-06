#include <stdio.h>
#include <stdlib.h>
float mean(int numbers[], int length)
{
	printf("Podaj dlugosc tablicy: ");
	scanf("%d",&length);

	int i=0;
	float suma = 0;
	float wynik;
	while(i<=length){
	
	
		printf("Podaj liczbe: ");
		
		scanf("%d",&numbers[i]);	
		suma += numbers[i] ;
		wynik=suma/length;
		i++;
	}		
	printf("Srednia arytmetyczna wynosi:%d", wynik);
	
	
}
int main() 
{
	int dlugosc;
	int tablica[] = {};

	mean(tablica, dlugosc);
	

	return 0;
}

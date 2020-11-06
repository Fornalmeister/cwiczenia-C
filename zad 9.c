#include <stdlib.h>
#include <stdio.h>
void reverse(int numbers[], int length){
	int i =0;
	int zmiana;
	while(i<length)
	{
		printf("podaj %d wyraz: ",i);
		scanf("%d",&numbers[i]);
		i++;
	}
	for(i=0;i<length;i++)
		printf("wyraz %d wynosi: %d \n",i ,numbers[i]);
	
   for (i=0;i<(length)/2;i++) 
   {
   		zmiana=numbers[i];
    	numbers[i]=numbers[length-1-i];
    	numbers[length-1-i]=zmiana;
	}
	for(i=0;i<length;i++)
		printf("Po zmianie wyraz %d wynosi: %d \n",i ,numbers[i]);
	
	
		
	}
	



int main()
{
	int dlugosc;
	int tablica[] = {} ;	
	printf("Podaj dlugosc: ");
	scanf("%d",&dlugosc);
	reverse(tablica,dlugosc);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,s,n,wynik;
	n=0; //ilosc przypisanych liczb

while(1)
{
	n++;
	printf("a=");
	scanf("%d",&a);
	
	if(a==0)
	{
		if(s==0)
		{
			printf("Nie podano zadnej liczby\n"); 
			break;
		}
	wynik=(s/(n-1));
	printf("Srednia arytmetyczna to:%f", wynik); 		
	break;
   }
	s+=a;
	
	
}

	
	
// MAM PROBLEM Z OBLICZENIEM SREDNIEJ PARAMETR S NIE CHCE DZIALAC	



return 0;
}

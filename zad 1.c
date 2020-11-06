#include <stdio.h>

int main()
{
	float a, b, wynik;
	scanf("%f", &a);
	scanf("%f", &b);
	printf("Pierwsza liczba to:%f \n",a);
	printf("Druga liczba to:%f \n",b);
	if(a == 0 ||  b == 0)
	{	
		printf("Nie dzielimy przez 0!");
    }
	else
	 {
		wynik=a/b;
		printf("Otrzymany wynik to:%f", wynik); 	
	 	
	 }
	
	
	
	return 0;
}

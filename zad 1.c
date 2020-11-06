#include <stdio.h>
#include <stdlib.h>

void funkcja(float a)
{
	printf("Wynik funkcji f(n)=(n/2)+2 to:%f", (a/2)+2 );
	
}
// w moim programie a==n

int main(){
	float a;
	printf("Podaj liczbe: ");
	scanf("%f",&a);
	funkcja(a);
	
	
	
	return 0;
}

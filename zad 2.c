#include <stdio.h>
#include <stdlib.h>

float min(float m1, float m2, float m3)
{
	float najmniejsza;
	najmniejsza = m1 ;
	if (m2 < najmniejsza) najmniejsza = m2;
	if (m3 < najmniejsza) najmniejsza = m3;
	printf("Najmniejsza liczba to:%f", najmniejsza);	
}
// wyskakuje ca³y czas 0 nwm co jest zle
int main(){
float a, b, c;
printf("Podaj pierwsza liczbe: ");
scanf("%f", &a);

printf("Podaj druga liczbe: ");
scanf("%f", &b);

printf("Podaj trzecia liczbe: ");
scanf("%f", &c);

min(a,b,c);
return 0;
}

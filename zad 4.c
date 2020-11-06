#include <stdio.h>
#include <stdlib.h>

void printRectangle(int height, int width, char c)
{
int i,j;
for(i=1;i<=height;i++) //wysokosc
{

for(j=1;j<=width;j++) //szerokosc
{
	printf("%c",c);	
}
	printf("\n");
}
}


int main(){
printf("Podaj znak: ");
char n = getchar();
int a,b;
printf("Podaj wysokosc: ");
scanf("%d", &a);
printf("Podaj szerokosc: ");
scanf("%d", &b);
printRectangle(a,b,n);




return 0;
}

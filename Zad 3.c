#include <stdio.h>
#include <stdlib.h>

void printLine(int width, char c)
{
int i;
for(i=1;i<=width;i++){
	printf("%c",c);
	
	
}	
	
	
	
}

int main()
{

printf("Podaj znak: ");
char n = getchar();
int a;
printf("Podaj szerokosc: ");
scanf("%d", &a);
printLine(a,n);






return 0;
}

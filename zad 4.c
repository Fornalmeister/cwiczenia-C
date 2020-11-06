#include <stdio.h>
#include <stdlib.h>

int main()
{
	int wysokosc;
	printf("podaj wysokosc: ");
	scanf("%d", &wysokosc);
	int i,j;
	for( i=0;i<wysokosc;i++)
	{
		for(j=0;j<=i ;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}




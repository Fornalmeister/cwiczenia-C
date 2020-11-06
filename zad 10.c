#include <stdlib.h>
#include <stdio.h>


int main()
{
	int i,j,n;
	int tablica[3][3];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("wiersz %d kolumna %d: ",i,j);
		scanf("%d",&n);
		tablica[i][j]=n;	
		}
		
	}
	
	
	return 0;
}

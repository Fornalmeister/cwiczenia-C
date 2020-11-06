#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char tekst[50];
	char tekst1[50]; 
	char tekst2[50]; 
	printf("Podaj pierwszy lancuch: ");
	gets(tekst1);
	printf("Podaj drugi lancuch: ");
	gets(tekst2);
	
	 if(strcmp( tekst1, tekst2 ) == 0 )
        printf( "Badane lancuchy znakow sa identyczne.\n" );
    else
        printf( "Badane lancuchy znakow nie sa identczne.\n" );
	
	if((tekst1>tekst2) || (tekst1==tekst2)){
	
		strcat(tekst1 ,tekst2);
		printf("%s",tekst1);
	}
	else if (tekst2>tekst1)
	{
							
		strcat( tekst2 , tekst1);
		printf("%s", tekst2);
	}
	
	return 0;
	
}

/*  zamiana ³ancuchow
	strcpy(tekst,tekst1);
 	strcpy(tekst1,tekst2);
 	strcpy(tekst2,tekst); 
*/ 


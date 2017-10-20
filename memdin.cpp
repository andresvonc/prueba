#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()

{
	char *cadena;
	int tam,len,ta,zi;
	
	ta=sizeof(char);
	tam=(strlen ("Verano")+1*sizeof(char));
	printf("Tamaño de tam %d\n", tam);
	cadena=(char*)malloc(tam);
	
	strcpy(cadena,"Verano");//copia la cadena desde el origen al destino
	puts(cadena);
	
	len=strlen(cadena);//mido el tamaño de la cadena
	printf("\nel tamano de len es %d\n",len);
	zi=sizeof(cadena);
	printf("\nel tamano de cadena es %d\n",zi);
	
	/*Amplia el bloque de memoria*/
	printf("\nEl tamaño es %d\n", tam);
	tam += (strlen(" en Sangolqui\n")+1)*sizeof(cadena);
	printf("\nEl tamaño es %d\n", tam);
	cadena=(char*) realloc(cadena,tam);
	
	strcat(cadena," en Sangolqui\n");// concatena dos espacios de memorias reservados
	puts(cadena);
	len=strlen(cadena);
	printf("\nel tamano es despues del concat %d",len);
	
	/*liberacion de memoria*/
	free(cadena);
	return 0;
}//fin main


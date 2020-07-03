#include<stdio.h>
#include<stdlib.h>

/*
*
**
*/
int main(){




	int contador = 0; 
	for(contador = 64; contador < 90; contador++){
	
	printf("%c \n", contador);	
	}
	
	
	for(contador = 97; contador < 122; contador++){
	
	printf("%c \n", contador);	
	}

	
	char nombre[10] = "Lvud";
	
	int indice = 0;
	for(indice = 0; indice < 10; indice++){
		 char temporal = nombre[indice];
		 if(temporal == 00){
		 	break;
		 }
		printf("%c",temporal-3);
		
	//	printf("%c",nombre[indice] );
		
	}
	
		return 0;
	
} 

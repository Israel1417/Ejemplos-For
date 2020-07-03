#include<stdio.h>
#include<stdlib.h>

/*
*
*Dada una palabra el jugador tiene 3 intentos para encontrar las letras de la palabra
*/
int main(){

	int MAX_CARACTERES = 20;
	char palabra[20]="saludo";
	char caracterIngresado=0;
	int contadorLetrasPorPalabra =0;
	int contadorAcierto =0;
	int contadorErrores = 0;
	int ATINO = 1;
	int NO_ATINO = 0;
	int indice = NO_ATINO;
	int MAX_ERRORES_PERMITIDOS = 3;
	int banderaAtino = 0; // 0 no le atino y 1 si le atino
	
	for(indice= 0; indice<MAX_CARACTERES;indice++ ){
	
		if(palabra[indice] != 0){
		contadorLetrasPorPalabra++;
		}else{
			break;
		}
	}
	
	
	printf("Bienvenido a nuestro juego de adivinar la palabra, Si cometes 3 errores, pierdes.\n");
	
	while(contadorErrores < MAX_ERRORES_PERMITIDOS || contadorAcierto != contadorLetrasPorPalabra){
	fflush(stdin);
	printf("Ingresa un caracter: \n");
	scanf("%c",&caracterIngresado);

	for(indice= 0; indice <MAX_CARACTERES;indice++ ){
	
		if(palabra[indice] == 0){
			banderaAtino == NO_ATINO;
				printf("hUY!! No le atinaste \n");
			contadorErrores++;
				break;
		}else if(palabra[indice] == caracterIngresado){
			printf("Felicidades le atinaste a una letra\n");
			contadorAcierto++;
			banderaAtino = ATINO;
			break;
		}
	}

	if(MAX_ERRORES_PERMITIDOS == contadorErrores){
		printf("Perdiste :( \n");
	}else if(contadorAcierto == contadorLetrasPorPalabra){
			printf("Felicidades le atinaste a todas las letras, la palabra es ");
			for(indice= 0; indice<MAX_CARACTERES;indice++ ){
				if(palabra[indice] != 0){
				printf("%c",palabra[indice] );
			}else{
				break;
			}
			
	}
	}
	else{
			printf("\nTe quedan: %i intentos\n",(MAX_ERRORES_PERMITIDOS-contadorErrores));	
	}
	




}

	
	



	return 0;
	
} 

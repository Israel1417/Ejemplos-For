#include <stdio.h>
#include <stdlib.h>

/**
* El programa pintará las tablas de multiplicar del 1 al 10
* SINTAXIS
* for(inicialización,condicion, incremador_decrementación){
*	// CODIGO
* }
*/


int main(int argc, char *argv[]) {
	
		int i=1;
		int j=1;
		int VALOR_FINAL=10;
		int	VALOR_INICIAL=1;

	for(i=1;i<=VALOR_FINAL;i++){
		printf("\n-------------------------------------");
		printf("\n======== TABLA DEL N%cMERO %i ========\n",163, i);
		printf("-------------------------------------\n\n");
		for(j=1;j<=10;j++){
			printf("%d x %d = %d \n",i,j,(i*j));
		}
		j=VALOR_INICIAL;
	}
return 0;	
}

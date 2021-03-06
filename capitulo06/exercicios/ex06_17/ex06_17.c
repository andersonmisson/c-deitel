/* ex06_17.c */
/* O que esse programa faz? */
#include <stdio.h>
#define SIZE 10

int whatIsThis( const int b[], int p ); /* prototipo da função*/

/* função main inicia a execução do programa */
int main( void ){

	int x; /* mantém valor de retorno da função whatIsThis */

	/* inicializa array a */
	int a[ SIZE ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	x = whatIsThis(a, SIZE);

	printf( "Resultado é %d\n", x );
	return 0; /* indica conclusão bem-sucedida */
} /* fim do main */

/* O que essa função faz? */
int whatIsThis( const int b[], int p ){

	/* caso básico */
	if (p == 1){
		return b[ 0 ];
	} /* fim do if */
	else{ /* etapa de recursão */

		return b[ p - 1] + whatIsThis(b, p -1);
	} /* fim do else */
} /* fim da função whatIsThis*/

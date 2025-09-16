#include <stdio.h>


void recursivoTorre(int numero){
	if (numero > 0){
		printf("Direita \n");
		
		recursivoTorre(numero - 1);
	}
}

void recursivoRainha(int numero){
	if (numero > 0){
		printf("Esquerda \n");
		
		recursivoRainha(numero - 1);
	}
}

void recursivoBispo(int numero){
	if (numero > 0){
		printf("Cima, Direita \n");
		
		recursivoBispo(numero - 1);
	}
}

void recursivoCavalo(int num){
	if (num > 0){
        for (int C = 1; C <= 2; C++){
            printf("Cima, ");
            }
        printf("Direita\n");
		
		recursivoCavalo(num - 1);
	}
}

int main(){

    int torre = 5, rainha = 8, bispo = 5, cavalo = 1;

    printf("\n");
    recursivoTorre(torre);
    printf("\n");
    recursivoRainha(rainha);
    printf("\n");
    recursivoBispo(bispo);
    printf("\n");
    recursivoCavalo(cavalo);
    printf("\n");
    
	return 0;
}

/*
 * main.c
 * Resposta do exercício 4 do capítulo 6.
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lista.h"

int main(void) {

	int numero = 0;
	bool achou = false;

	Lista *l = iniciar();
	do {

		printf("Digite um numero a ser adicionado na lista ou 0 para parar de adicionar: ");
		scanf("%d", &numero);

		if (numero != 0) {

			int i;
			int tamanho_lista = size(l);
			for(i = 1; i <= tamanho_lista; i++ ) {

				int elemento = get(l, i);

				if (elemento == numero) {
					achou = true;
					break;
				}
			}

			if (!achou) {
				add(l, numero);
			} else {
				achou = false;
			}

			exibir(l);
		}

	} while(numero != 0);

	return 0;
}


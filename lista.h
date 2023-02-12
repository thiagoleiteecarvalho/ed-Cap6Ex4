/*
 * lista.h
 * Header de definição da ED Lista Simples.
 * Author: Thiago Leite
 */

#pragma once

typedef struct elemento {
 int valor;
 struct elemento *proximo;
} Elemento;

typedef struct lista {
 Elemento *inicio;
 int tamanho;
} Lista;

Lista* iniciar();
void add(Lista *l, int numero);
int size(Lista *l);
int empty(Lista *l);
int get(Lista *l, int posicao);
void exibir(Lista *l);

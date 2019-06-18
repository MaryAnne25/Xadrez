/*
 * Rei.cpp
 *
 *  Created on: 16 de abr de 2019
 *      Author: Mariane
 */
#include <iostream>
#include <string.h>
#include "Rei.h"

using namespace std;

Rei::Rei(bool Time) {
	emJogo = true;
	time = Time;
}

char Rei::desenha(){
	if (time == false)
		return 'K'; // peças pretas são MAIUSCULAS
	else
		return 'k';
}

bool Rei::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){
	if (colunaDestino <= 8 && colunaDestino >= 1 && linhaDestino <= 8 && linhaDestino >= 1){   // checar se o destino não esta pra fora do tabuleiro
		if (linhaOrigem == linhaDestino && (colunaDestino == colunaOrigem+1 || colunaDestino == colunaOrigem-1)) //andar na mesma linha
			return true;
		else if (colunaOrigem == colunaDestino && (linhaDestino == linhaOrigem-1 || linhaDestino == linhaOrigem+1)) // andar na mesma coluna
			return true;
		else if (linhaDestino == linhaOrigem-1 && colunaDestino == colunaOrigem-1) //andar na diagonal superior esquerda
			return true;
		else if(linhaDestino == linhaOrigem+1 && colunaDestino == colunaOrigem+1) // andar na diagonal superior direita
			return true;
		else if (linhaDestino == linhaOrigem+1 && colunaDestino == colunaOrigem-1)// andar na diagonal inferior esquerda
			return true;
		else if (linhaDestino == linhaOrigem-1 && colunaDestino == colunaOrigem+1) // andar na diagonal inferior direita
			return true;
		else
			return false; // se for uma posição invalida
	} else
		return false; //caso esteja fora do tabuleiro
}

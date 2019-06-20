/*
 * Torre.cpp
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include "Torre.h"
#include <iostream>

using namespace std;

//faltam os movimentos especiais e saber se a peca eh inimiga ou aliada


Torre::Torre(bool Time) {    //construtor
	emJogo = true;
	time = Time;
}

char Torre::desenha() {      // desenha a peca no tabuleiro
	if (time == false)
		return 'T'; // peças pretas são MAIUSCULAS
	else
		return 't';
}

bool Torre::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino) {		//checa se movimento da torre e valido
	if ((linhaDestino > 0 && linhaDestino < 9) && (colunaDestino > 0 && colunaDestino < 9)) { //checa se a coluna e linha sao validas
		if (colunaDestino == colunaOrigem) {                       // se move na mesma coluna
			/*if (linhaDestino > linhaOrigem) {                    // se move da maior linha para menor linha
				for (int i = linhaOrigem+1; i  <= linhaDestino; i++) {         // falta verificar se peca eh inimiga ou aliada
					if (matriz[i][colunaDestino] != '-')  // se todas as casas entre linhaDestino e linhaOrigem estiverem vazias
						return false;     
				}   
				return true;   //caso o caminho inteiro esteja vazio, ele vai terminar for e retornar verdadeiro
			} else {             // se move da menor linha para maior linha
				for (int i = linhaOrigem-1; i  <= linhaDestino; i--) {         // falta verificar se peca eh inimiga ou aliada
					if (matriz[i][colunaDestino] != '-')  // se todas as casas entre linhaDestino e linhaOrigem estiverem vazias
						return false;     
				}  */
				return true;  //caso o caminho inteiro esteja vazio, ele vai terminar for e retornar verdadeiro

		} else if (linhaDestino == linhaOrigem) { /*                      // se move na mesma linha
			if (colunaDestino > colunaOrigem) {                //se move da menor coluna pra maior coluna
				for (int i = colunaOrigem+1; i  <= colunaDestino; i++) {         // falta verificar se peca eh inimiga ou aliada
					if (matriz[linhaDestino][i] != '-')  // se todas as casas entre linhaDestino e linhaOrigem estiverem vazias
						return false;     
				}
				return true;    //caso o caminho inteiro esteja vazio, ele vai terminar for e retornar verdadeiro
			} else {                         //se move da maior coluna para menor coluna
				for (int i = colunaOrigem-1; i  <= colunaDestino; i--) {         // falta verificar se peca eh inimiga ou aliada
					if (matriz[linhaDestino][i] != '-')  // se todas as casas entre linhaDestino e linhaOrigem estiverem vazias
						return false;     
				}
				*/
				return true;      //caso o caminho inteiro esteja vazio, ele vai terminar for e retornar verdadeiro

		} else
			return false;                        //caso o movimento nao seja valido

	} else
		return false;

}

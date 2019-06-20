/*
 * Posicao.cpp
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include <iostream>
#include <string.h>
#include "Posicao.h"

using namespace std;

Posicao::Posicao(int Linha, int Coluna) {
	linha = Linha;
	coluna = Coluna;

	ocupado = false;
	if ((linha + coluna) % 2 == 0)
		cor = true;
	else
		cor = false;

}

bool Posicao::getCor(){
	return cor;
}

bool Posicao::getOcupado(){
	return ocupado;
}



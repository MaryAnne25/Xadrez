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
	piece = NULL;


	if ((linha + coluna) % 2 == 0){
		cor = true;
	}
	else{
		cor = false;
	}
}

bool Posicao::getCor(){
	return cor;
}

bool Posicao::getOcupado(){
	return ocupado;
}

void Posicao::setOcupado(Piece* p){
	ocupado = true;
	piece = p;
}

Piece* Posicao::getPiece(){
	return piece;
}

void Posicao::setDesocupado(){
	ocupado = 0;
	piece = NULL;
}



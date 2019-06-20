/*
 * Jogo.cpp
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include <iostream>
#include <string.h>
#include "Jogo.h"

using namespace std;

Jogo::Jogo() {
	estado = 1;
	vez = 1;		//jogo sempre come�a com as pe�as BRANCAS
	tabuleiro.desenharTabuleiro();
}

int Jogo::getEstado() {
	return(estado);
}

int Jogo::getVez() {
	return(vez);
}



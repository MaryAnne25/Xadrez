/*
 * Rainha.h
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include <iostream>
#include <string.h>

class Rainha {

private:
	bool time;
	bool emJogo;
	
public:
	Rainha(bool Time);
	char desenha();
	bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
};

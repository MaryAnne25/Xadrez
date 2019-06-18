/*
 * Rei.h
 *
 *  Created on: 16 de abr de 2019
 *      Author: Mariane
 */
#include <iostream>
#include <string.h>

class Rei {

private:
	bool time;
	bool emJogo;
public:
	Rei(bool Time);
	char desenha();
	bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
};

/*
 * Bispo.h
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include <iostream>
#include <string.h>

class Bispo {

private:
	bool time; // 0 o time de cima
	bool emJogo;
	
public:
	Bispo(bool Time);
	char desenha();
	bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
};

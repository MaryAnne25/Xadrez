/*
 * Torre.h
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include <iostream>
#include <string.h>

class Torre {

private:
	bool time;
	bool emJogo;
	
public:
	Torre(bool Time);
	char desenha();
	bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
};

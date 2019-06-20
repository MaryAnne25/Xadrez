/*
 * Jogo.h
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
 
#ifndef JOGO_H_
#define JOGO_H_

#include <iostream>
#include <string.h>
#include "Tabuleiro.h"

class Jogo{

	private:
		int estado; 		// 1 = INICIO      2 = XEQUE       3= XEQUE-MATE
		int vez; 			// identificar a VEZ de cada jogador
		Tabuleiro tabuleiro;
		
	public:
		Jogo();
		int getEstado();
		int getVez();
};

#endif

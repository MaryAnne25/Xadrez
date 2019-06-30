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
#include <vector>
using std::vector;
#include "Tabuleiro.h"
#include "Jogador.h"
#include "Piece.h"
#include "Torre.h"
#include "Peao.h"
#include "Bispo.h"
#include "Rei.h"
#include "Rainha.h"
#include "Cavalo.h"

class Jogo{

	private:
		int estado; 		// 1 = INICIO      2 = XEQUE
		bool vez; 			// identificar a VEZ de cada jogador
		Tabuleiro tabuleiro;
		Jogador player[2];
		vector <Piece *> pieces1;
		vector <Piece *> pieces2;
		
	public:
		Jogo();
		void printTabuleiro();
		int getEstado();
		void setEstado(int i);
		bool check();
		bool getVez();
		void setVez(bool n);
		void setPlayer1(string n);
		void setPlayer2(string n);
		string getPlayer1();
		string getPlayer2();
		bool mover(int lin1, int col1, int lin2, int col2, bool vez);
		int colunas(char c);
};

#endif

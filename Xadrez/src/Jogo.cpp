/*
 * Jogo.cpp
 *
 *  Created on: 17 de abr de 2019
 *      Author:
 */
#include <iostream>
#include <string.h>
#include <typeinfo>
#include <vector>

#include "Jogo.h"



using namespace std;
using std::vector;

Jogo::Jogo() {
	estado = 1;
	vez = 1;		//jogo sempre começa com as peças BRANCAS

	Torre* tb1 = new Torre(1);
	Cavalo* cb1 = new Cavalo(1);
	Bispo* bb1 = new Bispo(1);
	Rainha* rab = new Rainha(1);
	Rei* reb = new Rei(1);
	Bispo* bb2 = new Bispo(1);
	Cavalo* cb2 = new Cavalo(1);
	Torre* tb2 = new Torre(1);
	Peao* pb1 = new Peao(1);
	Peao* pb2 = new Peao(1);
	Peao* pb3 = new Peao(1);
	Peao* pb4 = new Peao(1);
	Peao* pb5 = new Peao(1);
	Peao* pb6 = new Peao(1);
	Peao* pb7 = new Peao(1);
	Peao* pb8 = new Peao(1);

	Torre* tp1 = new Torre(0);
	Cavalo* cp1 = new Cavalo(0);
	Bispo* bp1 = new Bispo(0);
	Rainha* rap = new Rainha(0);
	Rei* rep = new Rei(0);
	Bispo* bp2 = new Bispo(0);
	Cavalo* cp2 = new Cavalo(0);
	Torre* tp2 = new Torre(0);
	Peao* pp1 = new Peao(0);
	Peao* pp2 = new Peao(0);
	Peao* pp3 = new Peao(0);
	Peao* pp4 = new Peao(0);
	Peao* pp5 = new Peao(0);
	Peao* pp6 = new Peao(0);
	Peao* pp7 = new Peao(0);
	Peao* pp8 = new Peao(0);

	pieces1.push_back(tb1);
	pieces1.push_back(cb1);
	pieces1.push_back(bb1);
	pieces1.push_back(rab);
	pieces1.push_back(reb);
	pieces1.push_back(bb2);
	pieces1.push_back(cb2);
	pieces1.push_back(tb2);
	pieces1.push_back(pb1);
	pieces1.push_back(pb2);
	pieces1.push_back(pb3);
	pieces1.push_back(pb4);
	pieces1.push_back(pb5);
	pieces1.push_back(pb6);
	pieces1.push_back(pb7);
	pieces1.push_back(pb8);

	pieces2.push_back(tp1);
	pieces2.push_back(cp1);
	pieces2.push_back(bp1);
	pieces2.push_back(rap);
	pieces2.push_back(rep);
	pieces2.push_back(bp2);
	pieces2.push_back(cp2);
	pieces2.push_back(tp2);
	pieces2.push_back(pp1);
	pieces2.push_back(pp2);
	pieces2.push_back(pp3);
	pieces2.push_back(pp4);
	pieces2.push_back(pp5);
	pieces2.push_back(pp6);
	pieces2.push_back(pp7);
	pieces2.push_back(pp8);

	player[0] = Jogador("nan", pieces1);

	player[1] = Jogador("nan", pieces2);

	tabuleiro = Tabuleiro(pieces1, pieces2);
}

void Jogo::printTabuleiro(){
	tabuleiro.desenharTabuleiro();
}

int Jogo::getEstado() {
	return(estado);
}

void Jogo::setEstado(int i){
	estado = i;
}

bool Jogo::getVez() {
	return(vez);
}

void Jogo::setVez(bool n){
	vez = n;
}


void Jogo::setPlayer1(string n){
	player[0].setNome(n);
}

void Jogo::setPlayer2(string n){
	player[1].setNome(n);
}

string Jogo::getPlayer1(){
	return(player[0].getNome());
}

string Jogo::getPlayer2(){
	return(player[1].getNome());
}

bool Jogo::mover(int lin1, int col1, int lin2, int col2, bool vez){//vez == true, peças brancas(que é o team true)
	if(tabuleiro.teamPosicao(lin1, col1) == vez){
		cout << "movendo" << endl;
		return tabuleiro.mover(lin1, col1, lin2, col2);
	}
	else{
		return false;
	}
}

bool Jogo::check(){
	int lin, col;
	int linRei = tabuleiro.reiPosicaoLinha(), colRei = tabuleiro.reiPosicaoColuna();
	for(lin = 0; lin < 8; lin++){
		for(col = 0; col < 8; col++){
			if(tabuleiro.checarCaminhoLivre(lin, col, linRei, colRei) == true && tabuleiro.teamPosicao(lin, col) != tabuleiro.teamPosicao(linRei, colRei)){
				return true;
			}
		}
	}
	return false;
}

int Jogo::colunas(char c){

	int i;

	switch(c){
	case 'A':
	case 'a':
		i = 0;
		break;
	case 'B':
	case 'b':
		i = 1;
		break;
	case 'C':
	case 'c':
		i = 2;
		break;
	case 'D':
	case 'd':
		i = 3;
		break;
	case 'E':
	case 'e':
		i = 4;
		break;
	case 'F':
	case 'f':
		i = 5;
		break;
	case 'G':
	case 'g':
		i = 6;
		break;
	case 'H':
	case 'h':
		i = 7;
		break;
	default: i = -1;
	}

	return i;
}


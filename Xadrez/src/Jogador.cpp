/*
 * Jogador.cpp
 *
 *  Created on: 21 de jun de 2019
 *      Author: Mariane
 */

#include "Jogador.h"
#include <iostream>

Jogador::Jogador(){}

Jogador::Jogador(string n, vector <Piece *> p) {
	nome = n;
	for(int i = 0; i < 16; i++){
		pieces.push_back(p.at(i));
	}
}

Jogador::~Jogador() {
	// TODO Auto-generated destructor stub
}

string Jogador::getNome(){
	return(nome);
}

void Jogador::setNome(string n){
	nome = n;
}



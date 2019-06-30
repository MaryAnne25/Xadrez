/*
 * Tabuleiro.cpp
 *
 *  Created on: 17 de abr de 2019
 *
 */
#include "Tabuleiro.h"

using namespace std;

Tabuleiro::Tabuleiro(){}

Tabuleiro::Tabuleiro(vector <Piece *> p1, vector <Piece *> p2) {
	for (int l = 0; l < 8; l++){
		for (int c = 0; c < 8; c++){
			posicao[l][c] = new Posicao(l, c);
		}
	}

	posicao[0][0]->setOcupado(p1.at(0));
	posicao[1][0]->setOcupado(p1.at(1));
	posicao[2][0]->setOcupado(p1.at(2));
	posicao[3][0]->setOcupado(p1.at(3));
	posicao[4][0]->setOcupado(p1.at(4));
	posicao[5][0]->setOcupado(p1.at(5));
	posicao[6][0]->setOcupado(p1.at(6));
	posicao[7][0]->setOcupado(p1.at(7));
	posicao[0][1]->setOcupado(p1.at(8));
	posicao[1][1]->setOcupado(p1.at(9));
	posicao[2][1]->setOcupado(p1.at(10));
	posicao[3][1]->setOcupado(p1.at(11));
	posicao[4][1]->setOcupado(p1.at(12));
	posicao[5][1]->setOcupado(p1.at(13));
	posicao[6][1]->setOcupado(p1.at(14));
	posicao[7][1]->setOcupado(p1.at(15));


	posicao[0][7]->setOcupado(p2.at(0));
	posicao[1][7]->setOcupado(p2.at(1));
	posicao[2][7]->setOcupado(p2.at(2));
	posicao[3][7]->setOcupado(p2.at(3));
	posicao[4][7]->setOcupado(p2.at(4));
	posicao[5][7]->setOcupado(p2.at(5));
	posicao[6][7]->setOcupado(p2.at(6));
	posicao[7][7]->setOcupado(p2.at(7));
	posicao[0][6]->setOcupado(p2.at(8));
	posicao[1][6]->setOcupado(p2.at(9));
	posicao[2][6]->setOcupado(p2.at(10));
	posicao[3][6]->setOcupado(p2.at(11));
	posicao[4][6]->setOcupado(p2.at(12));
	posicao[5][6]->setOcupado(p2.at(13));
	posicao[6][6]->setOcupado(p2.at(14));
	posicao[7][6]->setOcupado(p2.at(15));
}

Tabuleiro::~Tabuleiro() {
	for (int l = 0; l < 8; l++)
		for (int c = 0; c < 8; c++) {
			delete posicao[l][c];
		}
}

bool Tabuleiro::teamPosicao(int lin, int col){
	return posicao[lin][col]->getPiece()->getTeam();
}

int Tabuleiro::reiPosicaoLinha(){
	int lin, col;
	for(lin = 0; lin < 8; lin++){
		for(col = 0; col < 8; col++){
			if(posicao[lin][col]->getPiece()->desenha() == ('k' || 'K'))
				return col;
		}
	}
	return -1;
}

int Tabuleiro::reiPosicaoColuna(){
	int lin, col;
	for(lin = 0; lin < 8; lin++){
		for(col = 0; col < 8; col++){
			if(posicao[lin][col]->getPiece()->desenha() == ('k' || 'K'))
				return col;
		}
	}
	return -1;
}



void Tabuleiro::desenharTabuleiro(){
	cout << endl << "\t\t\t\t\t\t\t    A  B  C  D  E  F  G  H " << endl;
	cout << "\t\t\t\t\t\t\t   ________________________"  << endl;
	for (int l=0; l < 8; l++){
		cout << "\t\t\t\t\t\t\t" << l+1 << " |";
		for (int c=0 ; c < 8; c++){
			if (posicao[l][c]->getOcupado()){
				cout << " " << posicao[l][c]->getPiece()->desenha() << " ";
			}

			else if(posicao[l][c]->getCor())
				cout << " + " ; //casas brancas
			else
				cout << " - "; //casas pretas
		}
	cout << "| " << l+1 << endl;
	}
	cout << "\t\t\t\t\t\t\t   ________________________"  << endl;
	cout << "\t\t\t\t\t\t\t    A  B  C  D  E  F  G  H " << endl << endl;
}

bool Tabuleiro::checarCaminhoLivre(int lin1, int col1, int lin2, int col2){
	if(posicao[lin1][col1]->getPiece()->desenha() == 'p' && posicao[lin1][col1 + 1] != posicao[lin2][col2]){//peao branco na primeira jogada
		if(posicao[lin1][col1 + 1]->getOcupado() == true){
			return false;
		}
		else{
			return true;
		}
	}
	else if(posicao[lin1][col1]->getPiece()->desenha() == 'P' && posicao[lin1][col1 - 1] != posicao[lin2][col2]){//peao preto na primeira jogada
		if(posicao[lin1][col1 - 1]->getOcupado() == true){
			return false;
		}
		else{
			return true;
		}
	}
	else if(posicao[lin1][col1]->getPiece()->desenha() == ('q' || 'Q' || 'b' || 'B') && (lin2 < lin1 && col2 < col1)){ //diagonal superior esquerda rainhas e bispos
		for(int i = lin1 + 1, j = col1 + 1; i < lin2 && j < col2; i++, j++){
			if(posicao[i][j]->getOcupado() == true){
				return false;
			}
		}
		return true;
	}
	else if(posicao[lin1][col1]->getPiece()->desenha() == ('q' || 'Q' || 'b' || 'B') && (lin2 < lin1 && col2 > col1)){ // diagonal superior direita rainhas e bispos
		for(int i = lin1 - 1, j = col1 + 1; i > lin2 && j < col2; i--, j++){
			if(posicao[i][j]->getOcupado() == true){
				return false;
			}
		}
		return true;
	}
	else if(posicao[lin1][col1]->getPiece()->desenha() == ('q' || 'Q' || 'b' || 'B') && (lin2 > lin1 && col2 > col1)){//diagonal inferior direita rainhas e bispos
		for(int i = lin1 + 1, j = col1 + 1; i < lin2 && j < col2; i++, j++){
			if(posicao[i][j]->getOcupado() == true){
				return false;
			}
		}
		return true;
	}

	else if(posicao[lin1][col1]->getPiece()->desenha() == ('q' || 'Q' || 'b' || 'B') && (lin2 > lin1 && col2 < col1)){// diagonal inferior esquerda rainhas e bispos
		for(int i = lin1 + 1, j = col1 - 1; i < lin2 && j > col2; i++, j--){
			if(posicao[i][j]->getOcupado() == true){
				return false;
			}
		}
		return true;
	}
	else if(posicao[lin1][col1]->getPiece()->desenha() == ('q' || 'Q' || 't' || 'T') && (lin2 > lin1)){//na mesma coluna para cima rainhas e torres
		for(int i = lin1 + 1; i < lin2; i++){
			if(posicao[i][col1]->getOcupado() == true){
				return false;
			}
		}
		return true;
	}
	else if(posicao[lin1][col1]->getPiece()->desenha() == ('q' || 'Q' || 't' || 'T') && (lin2 < lin1)){//na mesma coluna para baixo rainhas e torres
		for(int i = lin1 - 1; i > lin2; i--){
			if(posicao[i][col1]->getOcupado() == true){
				return false;
			}
		}
		return true;
	}
	else if(posicao[lin1][col1]->getPiece()->desenha() == ('q' || 'Q' || 't' || 'T') && (col2 > col1)){//na mesma linha para frente rainhas e torres
		for(int i = col1 + 1; i < col2; i++){
			if(posicao[lin1][i]->getOcupado() == true){
				return false;
			}
		}
		return true;
	}
	else if(posicao[lin1][col1]->getPiece()->desenha() == ('q' || 'Q' || 't' || 'T') && (col2 < col1)){//na mesma linha para trás rainhas e torres
		for(int i = col1 - 1; i > col2; i--){
			if(posicao[lin1][i]->getOcupado() == true){
				return false;
			}
		}
		return true;
	}
	return true;
}

bool Tabuleiro::mover(int lin1, int col1, int lin2, int col2){
	if((posicao[lin1][col1]->getPiece()->checaMovimento(lin1, col1, lin2, col2)) == true){//se o movimento é válido
		if(checarCaminhoLivre(lin1, col1, lin2, col2) == true){
			if(posicao[lin2][col2]->getOcupado() == true){//se há uma peça na posição final, CAPTURA
				posicao[lin2][col2]->getPiece()->captured();
				posicao[lin2][col2]->setOcupado(posicao[lin1][col1]->getPiece());
				posicao[lin1][col1]->setDesocupado();
				desenharTabuleiro();
				cout << "movido" << endl;
				return true;
			}
			else{//se a posição final está vazia
				posicao[lin2][col2]->setOcupado(posicao[lin1][col1]->getPiece());
				posicao[lin1][col1]->setDesocupado();
				desenharTabuleiro();
				cout << "movido" << endl;
				return true;
			}
		}
		else{
			cout << "não movido" << endl;
			return false;
		}
	}
	else{
		cout << "não movido" << endl;
		return false;
	}
}

/*
Teste do método desenha():
	Objetivo do teste: Para cada time(peças pretas e peças brancas), retornar o caractere que representa seu objeto.
	Objeto: rei1, rei0.
	Método testado: Classe Rei. Metodo desenha().
	Valores dos parâmetros: O metodo desenha() nao tem parametros, usa apenas os parametros do construtor.
	Valor de retorno: o metodo desenha() retorna diferentes caracteres. rei1(true) cria uma peça branca, e o metodo desenha imprime uma letra minuscula. rei0(false) cria uma peça preta, e o metodo desenha imprime uma letra maiuscula.
	Tela: imprime "K" ou "k".

Teste do método checaMovimento():
	Objetivo do teste: Verificar se o movimento dado é valido.
	Objeto: rei1, rei0.
	Método testado: Classe Rei. Metodo checaMovimento().
	Valores dos parâmetros:	6,4,5,4
							6,4,5,5
							6,4,6,5
							6,4,2,2
							6,4,6,9
							8,1,9,1
	Valor de retorno: retorna um booleano True caso o movimento seja valido, e um booleano False caso o movimento seja invalido.
							True
							True
							True
							False
							False
							False
	Tela: 					Movimento Valido
							Movimento Valido
							Movimento Valido
							Movimento Invalido
							Movimento Invalido
							Movimento Invalido


*/
#include <iostream>
#include "Rei.h"

using namespace std;

int main () {
	Rei rei1(true);                       //cria um rei branco, letra minuscula
	Rei rei0(false);                      //cria um rei preto, letra maiuscula
	
	cout << rei1.desenha() <<endl;
	cout << rei0.desenha() << endl;

	if(rei1.checaMovimento(6,4,5,4))			//movimento de 1 casa para cima
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(rei1.checaMovimento(6,4,5,5))			//movimento de 1 casa na diagonal superior direita
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(rei1.checaMovimento(6,4,6,5))			//movimento de 1 casa para direita
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(rei1.checaMovimento(6,4,2,2))			//movimento de mais de 1 casa
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(rei1.checaMovimento(6,4,6,9))			//movimento de varias casas para fora do tabuleiro
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(rei1.checaMovimento(8,1,9,1))			//movimento de 1 casa para fora do tabuleiro
			cout << "Movimento Valido" << endl;
		else
			cout << "Movimento Invalido" << endl;

	return 0;
}

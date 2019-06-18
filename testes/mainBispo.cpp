/*
Teste do método desenha():
	Objetivo do teste: Para cada time(peças pretas e peças brancas), retornar o caractere que representa seu objeto.
	Objeto: bispo1, bispo0.
	Método testado: Classe Bispo. Metodo desenha().
	Valores dos parâmetros: O metodo desenha() nao tem parametros, usa apenas os parametros do construtor.
	Valor de retorno: o metodo desenha() retorna diferentes caracteres. bispo1(true) cria uma peça branca, e o metodo desenha imprime uma letra minuscula. bispo0(false) cria uma peça preta, e o metodo desenha imprime uma letra maiuscula.
	Tela: imprime "B" ou "b".

Teste do método checaMovimento():
	Objetivo do teste: Verificar se o movimento dado é valido.
	Objeto: bispo1.
	Método testado: Classe Bispo. Metodo checaMovimento().
	Valores dos parâmetros:	5,5,2,2
							5,5,3,7
							5,5,7,7
							5,5,7,3
							5,5,2,5
							5,5,4,8
							5,5,5,4
							5,5,2,9
							5,5,5,9
	Valor de retorno: retorna um booleano True caso o movimento seja valido, e um booleano False caso o movimento seja invalido.
							True
							True
							True
							True
							False
							False
							False
							False
							False
	Tela: 					Movimento Valido
							Movimento Valido
							Movimento Valido
							Movimento Valido
							Movimento Invalido
							Movimento Invalido
							Movimento Invalido
							Movimento Invalido
							Movimento Invalido

*/
#include <iostream>
#include "Bispo.h"

using namespace std;

int main () {
	Bispo bispo1(true);                       //cria um bispo branco, letra minuscula
	Bispo bispo0(false);                      //cria um bispo preto, letra maiuscula
	
	cout << bispo1.desenha() <<endl;
	cout << bispo0.desenha() << endl;

	if(bispo1.checaMovimento(5,5,2,2))			//movimento diagonal superior esquerda
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(bispo1.checaMovimento(5,5,3,7))			//movimento diagonal superior direita
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(bispo1.checaMovimento(5,5,7,7))			//movimento diagonal inferior direita
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(bispo1.checaMovimento(5,5,7,3))			//movimento diagonal inferior esquerda
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(bispo1.checaMovimento(5,5,2,5))			//movimento para cima
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(bispo1.checaMovimento(5,5,4,8))			//movimento fora da coluna, linha e diagonal.
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(bispo1.checaMovimento(5,5,5,4))			//movimento em 1 casa para esquerda
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(bispo1.checaMovimento(5,5,2,9))			//movimento na diagonal para fora do tabuleiro
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(bispo1.checaMovimento(5,5,5,9))			//movimento varias casas na direita para fora do tabuleiro
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;


	return 0;
}

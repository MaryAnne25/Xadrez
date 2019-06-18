/*
Teste do método desenha():
	Objetivo do teste: Para cada time(peças pretas e peças brancas), retornar o caractere que representa seu objeto.
	Objeto: peao1, peao0.
	Método testado: Classe Peao. Metodo desenha().
	Valores dos parâmetros: O metodo desenha() nao tem parametros, usa apenas os parametros do construtor.
	Valor de retorno: o metodo desenha() retorna diferentes caracteres. peao1(true) cria uma peça branca, e o metodo desenha imprime uma letra minuscula. peao0(false) cria uma peça preta, e o metodo desenha imprime uma letra maiuscula.
	Tela: imprime "P" ou "p".

Teste do método checaMovimento() para o time TRUE(BRANCO):
	Objetivo do teste: Verificar se o movimento dado é valido.
	Objeto: peao1.
	Método testado: Classe Peao. Metodo checaMovimento().
	Valores dos parâmetros:	7,3,5,3
							7,3,6,3
							7,3,6,4
							7,3,7,4
							7,3,8,3
							7,3,9,3
	Valor de retorno: retorna um booleano True caso o movimento seja valido, e um booleano False caso o movimento seja invalido.
							True
							True
							False
							False
							False
							False
	Tela: 					Movimento Valido
							Movimento Valido
							Movimento Invalido
							Movimento Invalido
							Movimento Invalido
							Movimento Invalido


Teste do método checaMovimento() para o time FALSE(PRETO):
	Objetivo do teste: Verificar se o movimento dado é valido.
	Objeto: peao0.
	Método testado: Classe Peao. Metodo checaMovimento().
	Valores dos parâmetros:	2,4,4,4
							2,4,3,4
							2,4,3,5
							2,4,2,5
							2,4,1,4
							2,4,2,9
	Valor de retorno: retorna um booleano True caso o movimento seja valido, e um booleano False caso o movimento seja invalido.
							True
							True
							False
							False
							False
							False
	Tela: 					Movimento Valido
							Movimento Valido
							Movimento Invalido
							Movimento Invalido
							Movimento Invalido
							Movimento Invalido

*/
#include <iostream>
#include "Peao.h"

using namespace std;

int main () {
	Peao peao1(true);                       //cria um peao branco, letra minuscula
	Peao peao0(false);                      //cria um peao preto, letra maiuscula
	
	cout << peao1.desenha() <<endl;
	cout << peao0.desenha() << endl;

	if(peao1.checaMovimento(7,3,5,3))			//movimento de 2 casas pra cima no primeiro movimento do peao1
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(peao1.checaMovimento(7,3,6,3))			//movimento de 1 casa pra cima do peao1
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(peao1.checaMovimento(7,3,6,4))			//movimento de 1 casa diagonal superior direita
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(peao1.checaMovimento(7,3,7,4))			//movimento de 1 casa para direita
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(peao1.checaMovimento(7,3,8,3))			//movimento de 1 casa para baixo
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(peao1.checaMovimento(7,3,9,3))			//movimento de varias casas para fora do tabuleiro
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;



	cout << endl; // PROXIMO TESTE


	if(peao0.checaMovimento(2,4,4,4))			//movimento de 2 casas pra baixo no primeiro movimento do peao0
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(peao0.checaMovimento(2,4,3,4))			//movimento de 1 casa pra baixo do peao0
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(peao0.checaMovimento(2,4,3,5))			//movimento de 1 casa diagonal inferior direita
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(peao0.checaMovimento(2,4,2,5))			//movimento de 1 casa para direita
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(peao0.checaMovimento(2,4,1,4))			//movimento de 1 casa para cima
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(peao0.checaMovimento(2,4,2,9))			//movimento de varias casas para fora do tabuleiro
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	return 0;
}

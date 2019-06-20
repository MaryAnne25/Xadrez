/*
Teste do método desenha():
	Objetivo do teste: Para cada time(peças pretas e peças brancas), retornar o caractere que representa seu objeto.
	Objeto: rainha1, rainha0.
	Método testado: Classe Rainha. Metodo desenha().
	Valores dos parâmetros: O metodo desenha() nao tem parametros, usa apenas os parametros do construtor.
	Valor de retorno: o metodo desenha() retorna diferentes caracteres. rainha1(true) cria uma peça branca, e o metodo desenha imprime uma letra minuscula. rainha0(false) cria uma peça preta, e o metodo desenha imprime uma letra maiuscula.
	Tela: imprime "Q" ou "q".

Teste do método checaMovimento():
	Objetivo do teste: Verificar se o movimento dado é valido.
	Objeto: rainha1, rainha0.
	Método testado: Classe Rainha. Metodo checaMovimento().
	Valores dos parâmetros: 4,4,8,4
							4,4,7,1
							4,4,8,8
							4,4,2,1
							4,4,9,9
							4,4,3,2

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


*//*
#include <iostream>
#include "Rainha.h"

using namespace std;

int main () {
	Rainha rainha1(true);                       //cria um rainha branco, letra minuscula
	Rainha rainha0(false);                      //cria um rainha preto, letra maiuscula
	
	cout << rainha1.desenha() <<endl;
	cout << rainha0.desenha() << endl;

	if(rainha1.checaMovimento(4,4,8,4))			//movimento de varias casas para baixo
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(rainha1.checaMovimento(4,4,7,1))			//movimento de varias casas na diagonal inferior esquerda
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(rainha1.checaMovimento(4,4,8,8))			//movimento de varias casas na diagonal inferior direita
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(rainha1.checaMovimento(4,4,2,1))			//movimento de varias casas fora da coluna, linha ou diagonal
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(rainha1.checaMovimento(4,4,9,9))			//movimento de varias casas na diagonal para fora do tabuleiro
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(rainha1.checaMovimento(4,4,3,2))			//movimento de em L para canto superior direito
			cout << "Movimento Valido" << endl;
		else
			cout << "Movimento Invalido" << endl;

	return 0;
}*/

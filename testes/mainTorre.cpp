/*
Teste do método desenha():
	Objetivo do teste: Para cada time(peças pretas e peças brancas), retornar o caractere que representa seu objeto.
	Objeto: torre1, torre0.
	Método testado: Classe Torre. Metodo desenha().
	Valores dos parâmetros: O metodo desenha() nao tem parametros, usa apenas os parametros do construtor.
	Valor de retorno: o metodo desenha() retorna diferentes caracteres. torre1(true) cria uma peça branca, e o metodo desenha imprime uma letra minuscula. torre0(false) cria uma peça preta, e o metodo desenha imprime uma letra maiuscula.
	Tela: imprime "T" ou "t".

Teste do método checaMovimento():
	Objetivo do teste: Verificar se o movimento dado é valido.
	Objeto: torre1, torre0.
	Método testado: Classe Torre. Metodo checaMovimento().
	Valores dos parâmetros:	5,5,8,5
							5,5,5,1
							5,5,4,4
							8,1,8,10
							8,1,9,9
	Valor de retorno: retorna um booleano True caso o movimento seja valido, e um booleano False caso o movimento seja invalido.
							True
							True
							False
							False
							False
	Tela: 					Movimento Valido
							Movimento Valido
							Movimento Invalido
							Movimento Invalido
							Movimento Invalido


*/
#include <iostream>
#include "Torre.h"

using namespace std;

int main () {
	Torre torre1(true);                       //cria uma torre branca, letra minuscula
	Torre torre0(false);                      //cria uma torre preta, letra maiuscula
	
	cout << torre1.desenha() <<endl;
	cout << torre0.desenha() << endl;

	if(torre1.checaMovimento(5,5,8,5))			//movimento na mesma coluna
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(torre1.checaMovimento(5,5,5,1))			//movimento na mesma linha
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(torre1.checaMovimento(5,5,4,4))			//movimento na diagonal
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(torre1.checaMovimento(8,1,8,10))			//movimento na mesma linha fora do tabuleiro
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(torre1.checaMovimento(8,1,9,9))			//movimento fora do tabuleiro
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	return 0;
}

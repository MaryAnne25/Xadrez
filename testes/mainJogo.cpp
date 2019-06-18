/*
Teste da Classe Jogo:
	Objetivo do teste: Cria um objeto do tipo Jogo, testa seu metodo getEstado(), getVez() e testa seu construtor que contem:	um objeto do tipo Tabuleiro
	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 											atribui 1 ao atributo estado (indicando o inicio do jogo)
	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 											atribui 1 ao atributo vez (indicando qual jogador ira começar a partida)
	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 											O metodo tabuleiro.desenharTabuleiro().
	Objeto: jogo.
	Método testado: Classe Jogo. Construtor Jogo(), Metodo getEstado() e Metodo getVez().
	Valores dos parâmetros: Não tem valor de parametro
	Valor de retorno: getEstado() retorna 1, getVez retorna 1.
	Tela:
				1  2  3  4  5  6  7  8
			   ________________________
			1 | 1  0  1  0  1  0  1  0 |
			2 | 0  1  0  1  0  1  0  1 |
			3 | 1  0  1  0  1  0  1  0 |
			4 | 0  1  0  1  0  1  0  1 |
			5 | 1  0  1  0  1  0  1  0 |
			6 | 0  1  0  1  0  1  0  1 |
			7 | 1  0  1  0  1  0  1  0 |
			8 | 0  1  0  1  0  1  0  1 |

			Estado: 1
			Vez: 1
*/

#include <iostream>
#include "Jogo.h"

using namespace std;

int main () {
	Jogo jogo; // declara o jogo do tipo Jogo e que imprime em seu construtor o tabuleiro
	cout << "Estado: " << jogo.getEstado() << endl << "Vez: " << jogo.getVez() << endl; // comprova o valor 1 dado aos atributos estado e vez.
	return 0;
}

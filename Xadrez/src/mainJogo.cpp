/*
Teste da Classe Jogo:
	Objetivo do teste: Cria um objeto do tipo Jogo, testa seu metodo getEstado(), getVez() e testa seu construtor que contem:	um objeto do tipo Tabuleiro
	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 											atribui 1 ao atributo estado (indicando o inicio do jogo)
	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 											atribui 1 ao atributo vez (indicando qual jogador ira come�ar a partida)
	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 											O metodo tabuleiro.desenharTabuleiro().
	Objeto: jogo.
	M�todo testado: Classe Jogo. Construtor Jogo(), Metodo getEstado() e Metodo getVez().
	Valores dos par�metros: N�o tem valor de parametro
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

	string nome1, nome2;
	bool gameON = true;
	char col1, col2;
	int lin1, lin2;

	Jogo jogo; // declara o jogo do tipo Jogo e que imprime em seu construtor o tabuleiro

	cout << "Digite o nome do primeiro jogador(pe�as brancas, representadas por letras min�sculas):" << endl;
	cin >> nome1;
	jogo.setPlayer1(nome1);
	cout << "Digite o nome do segundo jogador(pe�as pretas, representadas por letras mai�sculas):" << endl;
	cin >> nome2;
	jogo.setPlayer2(nome2);
	jogo.printTabuleiro();

	while(gameON){

		if(jogo.getVez() == true){
			cout << "� a vez de " << jogo.getPlayer1() << endl;
			jogo.setVez(false);
		}
		else{
			cout << "� a vez de " << jogo.getPlayer2() << endl;
			jogo.setVez(true);
		}

		cout << "Insira a posi��o atual da pe�a que quer mover e para qual posi��o quer envi�-la no formato: 'linha atual' 'coluna atual' 'linha destino' 'coluna destino'" << endl;
		cin >> lin1;
		cin >> col1;
		cin >> lin2;
		cin >> col2;

		while(jogo.mover((lin1 - 1), jogo.colunas(col1), (lin2 - 1), jogo.colunas(col2), jogo.getVez()) == false){
			cout << "Movimento inv�lido, tente novamente" << endl;
			cin >> lin1;
			cin >> col1;
			cin >> lin2;
			cin >> col2;
		}

		if(jogo.check() == true){
			jogo.setEstado(2);
			cout << "CHEQUE!!!" << endl;
		}
		else{
			jogo.setEstado(0);
		}

	}

	return 0;
}

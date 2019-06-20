/*
Teste do método desenha():
	Objetivo do teste: Para cada time(peças pretas e peças brancas), retornar o caractere que representa seu objeto.
	Objeto: cavalo1, cavalo0.
	Método testado: Classe Cavalo. Metodo desenha().
	Valores dos parâmetros: O metodo desenha() nao tem parametros, usa apenas os parametros do construtor.
	Valor de retorno: o metodo desenha() retorna diferentes caracteres. cavalo1(true) cria uma peça branca, e o metodo desenha imprime uma letra minuscula. cavalo0(false) cria uma peça preta, e o metodo desenha imprime uma letra maiuscula.
	Tela: imprime "C" ou "c".

Teste do método checaMovimento():
	Objetivo do teste: Verificar se o movimento dado é valido.
	Objeto: cavalo1.
	Método testado: Classe Cavalo. Metodo checaMovimento().
	Valores dos parâmetros:	5,5,4,3
							5,5,3,4
							5,5,3,6
							5,5,4,7
							5,5,6,7
							5,5,7,6
							5,5,7,4
							5,5,6,3
							5,5,3,5
							5,5,5,9
							5,5,5,4
							5,5,2,2
	Valor de retorno: retorna um booleano True caso o movimento seja valido, e um booleano False caso o movimento seja invalido.
							True
							True
							True
							True
							True
							True
							True
							True
							False
							False
							False
							False
	Tela: 					Movimento Valido
							Movimento Valido
							Movimento Valido
							Movimento Valido
							Movimento Valido
							Movimento Valido
							Movimento Valido
							Movimento Valido
							Movimento Invalido
							Movimento Invalido
							Movimento Invalido
							Movimento Invalido

*/
/*#include <iostream>
#include "Cavalo.h"

using namespace std;

int main () {
	Cavalo cavalo1(true);                       //cria um cavalo branco, letra minuscula
	Cavalo cavalo0(false);                      //cria um cavalo preto, letra maiuscula
	
	cout << cavalo1.desenha() <<endl;
	cout << cavalo0.desenha() << endl;

	if(cavalo1.checaMovimento(5,5,4,3))			//movimento em L horizontal superior esquerdo
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(cavalo1.checaMovimento(5,5,3,4))			//movimento em L vertical superior esquerdo
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(cavalo1.checaMovimento(5,5,3,6))			//movimento em L vertical superior direito
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(cavalo1.checaMovimento(5,5,4,7))			//movimento em L horizontal superior direito
		cout << "Movimento Valido" << endl;
	else 
		cout << "Movimento Invalido" << endl;

	if(cavalo1.checaMovimento(5,5,6,7))			//movimento em L horizontal inferior direito
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(cavalo1.checaMovimento(5,5,7,6))			//movimento em L vertical inferior direito
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(cavalo1.checaMovimento(5,5,7,4))			//movimento em L vertical inferior esquerdo
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(cavalo1.checaMovimento(5,5,6,3))			//movimento em L horizontal inferior esquerdo
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(cavalo1.checaMovimento(5,5,3,5))			//movimento de 2 casas para cima
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(cavalo1.checaMovimento(5,5,5,9))			//movimento de varias casas para a direita
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(cavalo1.checaMovimento(5,5,5,4))			//movimento de 1 casa para esquerda
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;

	if(cavalo1.checaMovimento(5,5,2,2))			//movimento de varias casas na diagonal superior esquerda
		cout << "Movimento Valido" << endl;
	else
		cout << "Movimento Invalido" << endl;




	return 0;
}
*/

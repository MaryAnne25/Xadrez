/*
Teste da classe Posicao:
	Objetivo do teste: Se a soma da linha e coluna for impar, o atributo Cor deve receber 0(preto), quando for par Cor deve receber 1(branco). E o atributo ocupado se inicia com 0, pois o tabuleiro esta vazio.
	Objeto: posicao.
	Método testado: Classe Posicao. Construtor Posicao(), getOcupado() e getCor().
	Valores dos parâmetros: para o objeto posicao0 os parametros foram 1 e 2.
							para o objeto posicao1 os parametros foram 2 e 2.
	Valor de retorno: getOcupado retorna 0 para ambos os objetos, getCor retorna 1 para o objeto posicao1, e retorna 0 para objeto posicao0
	Tela:				Atributo COR do objeto posicao0:		0
						Atributo OCUPADO do objeto posicao0:	0
						Atributo COR do objeto posicao1:		1
						Atributo OCUPADO do objeto posicao1: 	0

*/
#include <iostream>
#include "Posicao.h"
using namespace std;

int main(){
	Posicao posicao0(1,2);		//cria uma posicao com a soma dos parametros(linha e coluna) impar, então o atributo Cor receberá 0(que significa preto).
	Posicao posicao1(2,2);		//cria uma posicao com a soma dos parametros(linha e coluna) par, então o atributo Cor receberá 1(que significa branco).

	cout << "Atributo COR do objeto posicao0:	" << posicao0.getCor() << endl;
	cout << "Atributo OCUPADO do objeto posicao0:	" << posicao0.getOcupado() << endl;	//OCUPADO SE INICIA EM 0 POIS O TABULEIRO ESTA VAZIO
	cout << "Atributo COR do objeto posicao1:	" << posicao1.getCor() << endl;
	cout << "Atributo OCUPADO do objeto posicao1: 	" << posicao1.getOcupado() << endl;
	
	return 0;
}

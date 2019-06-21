/*
 * Piece.h
 *
 *  Created on: 20 de jun de 2019
 *      Author: Mariane
 */

#ifndef PIECE_H_
#define PIECE_H_

class Piece {
public:
	virtual ~Piece(){}
	virtual char desenha();
	virtual bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);

protected:
	bool time;
	bool emJogo;
};
#endif /* PIECE_H_ */

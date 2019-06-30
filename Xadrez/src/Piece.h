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
	virtual ~Piece(){ };
	virtual char desenha() = 0;
	virtual bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino) = 0;
	virtual void captured() = 0;
	virtual bool getTeam() = 0;

protected:
	bool team;
	bool emJogo;
};
#endif /* PIECE_H_ */

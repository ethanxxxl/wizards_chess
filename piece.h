#ifndef PIECE_H
#define PIECE_H

#include <string>

class piece
{
public:
	// returns -1 on failed move
	virtual int move_piece(int x, int y);

private:
	bool is_taken;
	bool is_white;

	char x;
	char y;
};

#endif

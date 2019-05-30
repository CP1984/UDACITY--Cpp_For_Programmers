#include <iostream>
using namespace std;

class Board {
	char position[16];
	bool win;

public:
	Board();
	void printBoard();
	void setPosition(char mark, int positionIndex);
	bool checkWin();
	bool checkRow(int rowStart);
	bool checkColumn(int columnStart);
	bool checkDiagonal();
};

Board::Board() {
	for (int i = 0; i < 16; i++) {
		position[i] = '_';
	}
}

void Board::printBoard() {
	for (int i = 0; i < 16; i++) {
		cout << '|';
		cout << position[i];
		if (i % 4 == 3) {
			cout << '|';
			cout << "\n";
		}
		if (i == 15) {
			cout << "\n";
		}
	}
}

void Board::setPosition(char mark, int positionIndex) {
	position[positionIndex] = mark;
}

bool Board::checkWin() {
	for (int i = 0; i < 13; i = i + 4) {
		win = Board::checkRow(i);
		if (win == true) {
			return win;
		}
	}

	for (int i = 0; i < 4; i = i + 1) {
		win = Board::checkColumn(i);
		if (win == true) {
			return win;
		}
	}
	win = Board::checkDiagonal();
	if (win == true) {
		return win;
	}
	return false;
}

bool Board::checkRow(int rowStart) {
	int countWin = 0;
	for (int i = 1; i < 4; i++) {
		if (position[rowStart] == position[rowStart + i]) {
			countWin = countWin + 1;
		}
	}
	if (countWin == 3 && position[rowStart] != '_') {
		return true;
	}
	return false;
}

bool Board::checkColumn(int columnStart) {
	int countWin = 0;
	for (int i = 4; i < 13; i = i + 4) {
		if (position[columnStart] == position[columnStart + i]) {
			countWin = countWin + 1;
		}
	}
	if (countWin == 3 && position[columnStart] != '_') {
		return true;
	}
	return false;
}

bool Board::checkDiagonal() {
	int countWin = 0;
	for (int i = 5; i < 16; i = i + 5) {
		if (position[0] == position[0 + i]) {
			countWin = countWin + 1;
		}
	}
	if (countWin == 3 && position[0] != '_') {
		return true;
	}

	countWin = 0;
	for (int i = 3; i < 13; i = i + 3) {
		if (position[3] == position[3 + i]) {
			countWin = countWin + 1;
		}
	}
	if (countWin == 3 && position[0] != '_') {
		return true;
	}
	return false;
}
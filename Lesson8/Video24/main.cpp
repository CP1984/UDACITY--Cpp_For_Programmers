#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "mainClasses.cpp"

using namespace std;

int main() {
	Board board;
	string xUser;
	string oUser;
	int selectedPosition;
	int countRun = 0;
	bool win;

	cin >> xUser;
	cin >> oUser;

	cout << "The X user is " << xUser << endl;
	cout << "The O user is " << oUser << endl;
	cout << endl;
	cout << "Game start!!" << endl;
	cout << endl;
	for (countRun; countRun < 16; countRun++) {
		if (countRun % 2 == 0) {
			cin >> selectedPosition;
			board.setPosition('X', selectedPosition);
			board.printBoard();
			win = board.checkWin();
			if (win == true) {
				cout << xUser << " win!!";
				break;
			}
		}

		if (countRun % 2 == 1) {
			cin >> selectedPosition;
			board.setPosition('O', selectedPosition);
			board.printBoard();
			win = board.checkWin();
			if (win == true) {
				cout << oUser << " win!!";
				break;
			}
		}
		if (countRun == 15) {
			cout << "Tie game";
		}
	}
	return 0;
}
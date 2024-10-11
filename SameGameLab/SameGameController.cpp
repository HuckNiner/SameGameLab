#include <iostream>
#include "SameGameModel.h"
#include "SameGameView.h"

using namespace std;

void game();

int main() {
	game();

}
void game() {
	BoardGame b;
	view view(b);
	int NumberOfMoves = 0;
	cout << "Game Intro take care of later" << endl;
	while (1) {
		view.display();
		cout << "" << endl;
		int rowNumber;
		cin >> rowNumber;
		cout << "" << endl;
		int colNumber;
		cin >> colNumber;
		if (!b.isValidhit(rowNumber, colNumber)) {
			cout << "Invaild move, try again" << endl;
			continue;

		}
		else {
			b.remove(rowNumber, colNumber);
			while (b.stillFloatingColors()) {
				b.stillFloatingColors();
			}
			NumberOfMoves++;
		}
		if (b.stillColors() == false) {
			cout << "Game Over " << NumberOfMoves << " moves." << endl;
			return;
		}
	}
}
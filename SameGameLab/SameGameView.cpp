#include <iostream>
#include "SameGameModel.h"
#include "SameGameView.h"

using namespace std;


view::view(BoardGame& b) {
	board = &b;
}

string colorToPrint(color color) {
    switch (color) {
    case color::Red: return "R";
    case color::Blue: return "B";
    case color::Green: return "G";
    case color::Empty: return " ";
    default: return " ";

    }
}

void view::display() {
    cout << "    ";
    for (int col = 0; col < 5; col++) {
        cout << col << " ";
    }
    cout << endl;
    for (int col = 0; col < 4; col++) {
        cout << "---";
    }
    cout << endl;
    for (int row = 0; row < 5; row++) {
        cout << row << " | ";
        for (int col = 0; col < 5; col++) {
            cout << colorToPrint(board->getcolor(row, col)) << " ";
        }
        cout << endl;
    }
}

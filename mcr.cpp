#include <iostream>
using namespace std;

bool isWin(char game[3][3]) {
    bool win = false;
    // row
    if (game[0][0] == game[0][1] && game[0][1] == game[0][2] && (game[0][0] == 'X' || game[0][0] == 'O')) { win = true; }
    else if (game[1][0] == game[0][1] && game[1][1] == game[1][2] && (game[1][0] == 'X' || game[1][0] == 'O')) { win = true; }
    else if (game[2][0] == game[0][1] && game[2][1] == game[2][2] && (game[2][0] == 'X' || game[2][0] == 'O')) { win = true; }
    // column
    else if (game[0][0] == game[1][0] && game[1][0] == game[2][0] && (game[0][0] == 'X' || game[0][0] == 'O')) { win = true; }
    else if (game[0][1] == game[1][1] && game[1][1] == game[2][1] && (game[0][1] == 'X' || game[0][1] == 'O')) { win = true; }
    else if (game[0][2] == game[1][2] && game[1][2] == game[2][2] && (game[0][2] == 'X' || game[0][2] == 'O')) { win = true; }
    / diagonal
    else if (game[0][0] == game[1][1] && game[1][1] == game[2][2] && (game[0][0] == 'X' || game[0][0] == 'O')) { win = true; }
    else if (game[0][2] == game[1][1] && game[1][1] == game[2][0] && (game[0][2] == 'X' || game[0][2] == 'O')) { win = true; }
    return win;
}

int main() {
    int i, j;
    char game[3][3] = {' '}; // Tic-tac-toe
    char player1 = 'X';
    char player2 = 'O';
    bool turn = true; // false for player 1's turn, ture for player 2's turn. Player 1 first.
    cout << "X = Player 1" << endl << "O = Player 2" << endl;
    int n;
    for (n = 0; n < 9; n++) {
        turn = !turn;  // use the not-operator to change true to false or false to true.
        if (turn == false) {
            cout << "Player 1: ";
        }
        else {
            cout << "Player 2: ";
        }
        do {
            cout << "Which cell to mark? i:[1..3], j:[1..3]: ";
            cin >> i >> j;
        } while (i > 3 || i < 1 || j > 3 || j < 1};
        if (turn == false) {
            game[i - 1][j - 1] == 'X';
        }
        else {
            game[i - 1][j - 1] == 'O';
        }
        if (isWin(game)) {
            cout << "Win!" << endl;
            break; // need to terminate the problem
        }
    }
    if (n == 9) {  // all cells have been inputted above but no winner yet
        cout << "Tie!" << endl;
    }
        
    //show the game console
    cout << game[0][0] << " " << game[0][1] << " " << game[0][2] << endl;
    cout << game[1][0] << " " << game[1][1] << " " << game[1][2] << endl;
    cout << game[2][0] << " " << game[2][1] << " " << game[2][2] << endl;
    return 0;
}

#include <iostream>
using namespace std;

char board[3][3];
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove(char currentPlayer);
char checkWinner();
void printWinner(char winner);

int main() {
    char winner = ' ';
    resetBoard();
    char currentPlayer = PLAYER1;
    
    while (winner == ' ' && checkFreeSpaces() != 0) {
        printBoard();
        playerMove(currentPlayer);
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0) {
            break;
        }
        currentPlayer = (currentPlayer == PLAYER1) ? PLAYER2 : PLAYER1;
    }
    
    printBoard();
    printWinner(winner);

    return 0;
}

void resetBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---|---|---" << endl;
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---|---|---" << endl;
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << "---|---|---" << endl;
}

int checkFreeSpaces() {
    int freeSpaces = 9;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != ' ') {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void playerMove(char currentPlayer) {
    int x, y;
    do {
        cout << "Player " << currentPlayer << ", enter row #(1-3): ";
        cin >> x;
        x--;
        cout << "Player " << currentPlayer << ", enter column #(1-3): ";
        cin >> y;
        y--;
        if (board[x][y] != ' ') {
            cout << "Invalid move!" << endl;
        } else {
            board[x][y] = currentPlayer;
            break;
        }
    } while (board[x][y] != ' ');
}

char checkWinner() {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ') {
            return board[i][0];
        }
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ') {
            return board[0][i];
        }
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ') {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ') {
        return board[0][2];
    }
    return ' ';
}

void printWinner(char winner) {
    if (winner == PLAYER1) {
        cout << "Player X wins!" << endl;
    } else if (winner == PLAYER2) {
        cout << "Player O wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
}

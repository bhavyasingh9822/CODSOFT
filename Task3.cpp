#include <iostream>
using namespace std;

class TicTacToe {
    public:
    
    void createBoard(char board[3][3]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ' ';
            }
        }
    }

    void printBoard(char board[3][3]) {
        cout << "\n\nCurrent Board : \n";
        for (int i = 0; i < 3; i++) {
            cout << "\n  --- --- --- \n";
            for (int j = 0; j < 3; j++) {
                cout << " | " << board[i][j];
            }
            cout << " | ";  
        }
        cout << "\n  --- --- --- \n";
    }

    int checkboard(char board[3][3], char x) {
        for (int i = 0; i < 3; i++) {
            if ((board[i][0] == x) && (board[i][1] == x) && (board[i][2] == x)) {
                if (x == 'X') return 1;
                else return 2;
            }
            else if ((board[0][i] == x) && (board[1][i] == x) && (board[2][i] == x)) {
                if (x == 'X') return 1;
                else return 2;
            }
        }

        if ((board[0][0] == x) && (board[1][1] == x) && (board[2][2] == x)) {
            if (x == 'X') return 1;
            else return 2;
        }
        else if ((board[0][2] == x) && (board[1][1] == x) && (board[2][0] == x)) {
            if (x == 'X') return 1;
            else return 2;
        }
        return 0;
    }
};

int main() {
    char board[3][3], choice;
    int r, c;
    TicTacToe t;

    while (1) {
        cout << "\n>>> Tic-Tac-Toe <<<\n";
        cout << "\n 'X' assigned to Player 1";
        cout << "\n 'O' assigned to Player 2";
        t.createBoard(board);
        t.printBoard(board);

        for (int i = 1; i <= 9; i++) {
            if (i % 2 != 0) {
                cout << "\nPlayer 1 : Enter position of X : ";
                cin >> r >> c;
                board[r-1][c-1] = 'X';
                if (t.checkboard(board, 'X') == 1) {
                    t.printBoard(board);
                    cout << "\n>>> Congratulations, Player 1! You won the game! <<<\n";
                    cout << "\nUp for another game? (Y/N) : ";
                    cin >> choice;
                    if (choice == 'Y' || choice == 'y') main();
                    else exit(0);
                }        
            }
            else {
                cout << "\nPlayer 2 : Enter position of O : ";
                cin >> r >> c;
                board[r-1][c-1] = 'O';
                if (t.checkboard(board, 'O') == 2) {
                    t.printBoard(board);
                    cout << "\n>>> Congratulations, Player 2! You won the game! <<<\n";
                    cout << "\nUp for another game? (Y/N) : ";
                    cin >> choice;
                    if (choice == 'Y' || choice == 'y') main();
                    else exit(0);
                }
            }
            t.printBoard(board);
        }
        cout << "\n>>> Match DRAWN <<<\n";
        cout << "\nUp for another game? (Y/N) : ";
        cin >> choice;
        if (choice == 'Y' || choice == 'y') main();
        else exit(0);
    }    
}

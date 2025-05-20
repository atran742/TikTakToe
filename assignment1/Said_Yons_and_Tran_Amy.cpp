#include <iostream>
#include <vector>
using namespace std;


class TicTacToe {

public:

    bool winner1;
    bool winner2;
    int key;


    TicTacToe() {
        winner1 = false;
        winner2 = false;
        key = 0;

    }

    vector<vector<char>> gameBoard
            {
                    {'1', '2', '3'},
                    {'4', '5', '6'},
                    {'7', '8', '9'}
            };

    void printGameBoard() {
        for (int i = 0; i < gameBoard.size(); i++) {
            for (int j = 0; j < gameBoard[i].size(); j++) {
                cout << gameBoard[i][j] << " ";
            }
            cout << endl;
        }
    }

    void modifyGameBoard(char player, int position) {
        if (player == 'X') {
            if (position == 1)
                gameBoard[0][0] = 'X';
            if (position == 2)
                gameBoard[0][1] = 'X';
            if (position == 3)
                gameBoard[0][2] = 'X';
            if (position == 4)
                gameBoard[1][0] = 'X';
            if (position == 5)
                gameBoard[1][1] = 'X';
            if (position == 6)
                gameBoard[1][2] = 'X';
            if (position == 7)
                gameBoard[2][0] = 'X';
            if (position == 8)
                gameBoard[2][1] = 'X';
            if (position == 9)
                gameBoard[2][2] = 'X';
        } else {
            if (position == 1)
                gameBoard[0][0] = 'O';
            if (position == 2)
                gameBoard[0][1] = 'O';
            if (position == 3)
                gameBoard[0][2] = 'O';
            if (position == 4)
                gameBoard[1][0] = 'O';
            if (position == 5)
                gameBoard[1][1] = 'O';
            if (position == 6)
                gameBoard[1][2] = 'O';
            if (position == 7)
                gameBoard[2][0] = 'O';
            if (position == 8)
                gameBoard[2][1] = 'O';
            if (position == 9)
                gameBoard[2][2] = 'O';
        }


    }


    void gamePlay() {

        int count = 0;


        cout << "TIC TAC TOE" << endl;
        printGameBoard();

        while (!winner1&&!winner2) {

            if (!winner2) {
                cout << "Player X enter a position: ";
                cin >> key;
                modifyGameBoard('X', key);
                printGameBoard();
                count++;

                if (('X' == gameBoard[0][0] && 'X' == gameBoard[1][1] && 'X' == gameBoard[2][2]) ||
                    ('X' == gameBoard[2][0] && 'X' == gameBoard[1][1] && 'X' == gameBoard[0][2]) ||
                    ('X' == gameBoard[0][0] && 'X' == gameBoard[0][1] && 'X' == gameBoard[0][2]) ||
                    ('X' == gameBoard[0][0] && 'X' == gameBoard[1][0] && 'X' == gameBoard[2][0]) ||
                    ('X' == gameBoard[1][0] && 'X' == gameBoard[1][1] && 'X' == gameBoard[1][2]) ||
                    ('X' == gameBoard[2][0] && 'X' == gameBoard[2][1] && 'X' == gameBoard[2][2]) ||
                    ('X' == gameBoard[0][1] && 'X' == gameBoard[1][1] && 'X' == gameBoard[2][1]) ||
                    ('X' == gameBoard[0][2] && 'X' == gameBoard[1][2] && 'X' == gameBoard[2][2])) {
                    winner1 = true;
                    cout << "Player X wins!!!" << endl << "GAME OVER" << endl;
                }
            }
            if (!winner1&&!winner2&& count >= 9) {
                cout << "There is no winner" << endl;
                winner1= true;
            }

            if (!winner1) {
                cout << "Player O enter a position: ";
                cin >> key;
                modifyGameBoard('O', key);
                printGameBoard();
                count++;

                if (('O' == gameBoard[0][0] && 'O' == gameBoard[1][1] && 'O' == gameBoard[2][2]) ||
                    ('O' == gameBoard[2][0] && 'O' == gameBoard[1][1] && 'O' == gameBoard[0][2]) ||
                    ('O' == gameBoard[0][0] && 'O' == gameBoard[0][1] && 'O' == gameBoard[0][2]) ||
                    ('O' == gameBoard[0][0] && 'O' == gameBoard[1][0] && 'O' == gameBoard[2][0]) ||
                    ('O' == gameBoard[1][0] && 'O' == gameBoard[1][1] && 'O' == gameBoard[1][2]) ||
                    ('O' == gameBoard[2][0] && 'O' == gameBoard[2][1] && 'O' == gameBoard[2][2]) ||
                    ('O' == gameBoard[0][1] && 'O' == gameBoard[1][1] && 'O' == gameBoard[2][1]) ||
                    ('O' == gameBoard[0][2] && 'O' == gameBoard[1][2] && 'O' == gameBoard[2][2])) {
                    winner2 = true;

                    cout << "Player O wins!!!" << endl << "GAME OVER" << endl;
                }
            }

        }

    }
};

int main()
{
    TicTacToe play;
    play.gamePlay();

    return 0;

}







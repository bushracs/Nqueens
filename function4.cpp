#include "function1.h"
bool checkSolution() {
    int board[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = 0;
    if (solveNQueen(board, 0) == false) {
        cout << "Solution does not exist";
        return false;
    }
    printBoard(board);
    return true;
}

#include <iostream>
#include <vector>
#include <string>

// Function to print the tic-tac-toe board
void printBoard(const std::vector<std::vector<char>>& board) {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
}

// Function to check if a player has won
bool checkWin(const std::vector<std::vector<char>>& board, char player) {
    // Check rows
    for (const auto& row : board) {
        bool win = true;
        for (const auto& cell : row) {
            if (cell != player) {
                win = false;
                break;
            }
        }
        if (win) {
            return true;
        }
    }

    // Check columns
    for (size_t col = 0; col < board[0].size(); col++) {
        bool win = true;
        for (size_t row = 0; row < board.size(); row++) {
            if (board[row][col] != player) {
                win = false;
                break;
            }
        }
        if (win) {
            return true;
        }
    }

    // Check diagonals
    bool win = true;
    for (size_t i = 0; i < board.size(); i++) {
        if (board[i][i] != player) {
            win = false;
            break;
        }
    }
    if (win) {
        return true;
    }

    win = true;
    for (size_t i = 0; i < board.size(); i++) {
        if (board[i][board.size() - 1 - i] != player) {
            win = false;
            break;
        }
    }
    if (win) {
        return true;
    }

    return false;
}

// Function to check if the board is full
bool checkFull(const std::vector<std::vector<char>>& board) {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            if (cell == ' ') {
                return false;
            }
        }
    }
    return true;
}

// Function to play tic-tac-toe
void playTicTacToe() {
    std::vector<std::vector<char>> board(3, std::vector<char>(3, ' '));
    char currentPlayer = 'X';

    while (true) {
        // Print the board
        printBoard(board);

        // Get the player's move
        int row, col;
        std::cout << "Player " << currentPlayer << ", enter your move (row column): ";
        std::cin >> row >> col;

        // Check if the move is valid
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            std::cout << "Invalid move. Try again." << std::endl;
            continue;
        }

        // Make the move
        board[row][col] = currentPlayer;

        // Check if the current player has won
        if (checkWin(board, currentPlayer)) {
            std::cout << "Player " << currentPlayer << " wins!" << std::endl;
            break;
        }

        // Check if the board is full
        if (checkFull(board)) {
            std::cout << "It's a tie!" << std::endl;
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

int main() {
    playTicTacToe();
    return 0;
}
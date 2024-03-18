#include <iostream>
#include <vector>
#include <string>

std::string check_winner(const std::vector<std::string>& board) {
    // Check rows
    for (const auto& row : board) {
        if (row == "XXX")
            return "X";
        else if (row == "OOO")
            return "O";
        else if (row == "+++")
            return "+";
    }

    // Check columns
    for (int col = 0; col < 3; ++col) {
        if (board[0][col] == board[1][col] && board[1][col] == board[2][col]) {
            if (board[0][col] == 'X')
                return "X";
            else if (board[0][col] == 'O')
                return "O";
            else if (board[0][col] == '+')
                return "+";
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] == 'X')
            return "X";
        else if (board[0][0] == 'O')
            return "O";
        else if (board[0][0] == '+')
            return "+";
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] == 'X')
            return "X";
        else if (board[0][2] == 'O')
            return "O";
        else if (board[0][2] == '+')
            return "+";
    }

    return "DRAW";
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::vector<std::string> board(3);
        for (int i = 0; i < 3; ++i)
            std::cin >> board[i];

        std::cout << check_winner(board) << std::endl;
    }

    return 0;
}

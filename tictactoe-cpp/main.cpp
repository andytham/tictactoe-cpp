#include <iostream>
#include <string>
#include <unordered_map>
template <size_t rows, size_t cols>
bool isWinner(int (&solution)[rows][cols], std::unordered_map<int, std::string> board, std::string currentPlayer) {
	std::cout << "solution check" << std::endl;
	for (auto i = 0; i < 8; i++) {
		if (board[solution[i][0]] == currentPlayer && board[solution[i][0]] == board[solution[i][1]] && board[solution[i][0]] == board[solution[i][2]]) {
			std::cout << "Solution found" << std::endl;
			return true;
		}
	}
	std::cout << "No solution" << std::endl;
	return false;
}
void placePiece(int pos, std::string currentPlayer, std::unordered_map<int, std::string> board){
	board[pos] = currentPlayer;
	return;
}
int main() {
	std::cout << "hello world\n";
	int input;
	int solution[8][3] = {
	{ 1, 2, 3 },
	{ 4, 5, 6 },
	{ 7, 8, 9 },
	{ 1, 5, 9 },
	{ 3, 6, 7 },
	{ 1, 4, 7 },
	{ 2, 5, 8 },
	{ 3, 6, 9 }
	};
	std::unordered_map<int, std::string> board;
	board[1] = "X";
	bool gameOver = false;
	std::string currentPlayer = "X";
	while (!gameOver) {
		std::cout << "Enter next command" << std::endl;
		std::cin >> input;
		while (true) {
			if (input > 0 && input < 10) {
				break;
			}
			std::cout << "Enter valid spot: " << std::endl;
			std::cin >> input;
		}
		placePiece(input, currentPlayer, board);
		std::cout << currentPlayer << input << std::endl;
		if (isWinner(solution, board, currentPlayer)) {
			std::cout << "Winner is " << currentPlayer << std::endl;
			break;
		}
		if (currentPlayer == "X") {
			currentPlayer = "O";
		}
		else {
			currentPlayer = "X";
		}
		input = 0;
	}
	return 0;
}
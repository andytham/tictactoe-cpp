#include <iostream>
#include <string>
#include <unordered_map>
template <size_t rows, size_t cols>
bool isWinner(int (&solution)[rows][cols], std::unordered_map<int, std::string> board) {
	for (auto i = 0; i < 8; i++) {
		std::cout << "s" << std::endl;
		if (solution[i][0] == 1) {

		}
	}
	return false;
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
		std::cout << currentPlayer << input << std::endl;
		if (currentPlayer == "X") {
			currentPlayer = "O";
		}
		else {
			currentPlayer = "X";
		}

	}
	return 0;
}
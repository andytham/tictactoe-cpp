#include <iostream>
#include <string>
#include <unordered_map>
template <size_t rows, size_t cols>
bool isWinner(int (&solution)[rows][cols], std::unordered_map<int, std::string> board, std::string currentPlayer) {
	//std::cout << "solution check" << std::endl;
	for (auto i = 0; i < 8; i++) {
		if (board[solution[i][0]] == currentPlayer && board[solution[i][0]] == board[solution[i][1]] && board[solution[i][0]] == board[solution[i][2]]) {
			//std::cout << "Solution found" << std::endl;
			return true;
		}
	}
	//std::cout << "No solution" << std::endl;
	return false;
}
void placePiece(int pos, std::string currentPlayer, std::unordered_map<int, std::string>& board){
	board[pos] = currentPlayer;
	//std::cout << "place piece is ran" << pos << currentPlayer;
	return;
}
void printBoard(std::unordered_map<int, std::string> board) {
	std::cout << "Current board :" << std::endl;
	std::cout << board[1] << "|" << board[2] << "|" << board[3] << std::endl;
	std::cout << "- - -" << std::endl;
	std::cout << board[4] << "|" << board[5] << "|" << board[6] << std::endl;
	std::cout << "- - -" << std::endl;
	std::cout << board[7] << "|" << board[8] << "|" << board[9] << std::endl;
	return;
}
int main() {
	int solution[8][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
		{ 1, 5, 9 },
		{ 3, 5, 7 },
		{ 1, 4, 7 },
		{ 2, 5, 8 },
		{ 3, 6, 9 }
	};
	std::unordered_map<int, std::string> board{ 
		{1, " "},
		{2, " "},
		{3, " "},
		{4, " "},
		{5, " "},
		{6, " "},
		{7, " "},
		{8, " "},
		{9, " "}
	};
	int input;
	std::cout << "Enter a number to place your piece there." << std::endl;
	std::cout << "1|2|3" << std::endl << "- - -" << std::endl << "4|5|6" << std::endl << "- - -" << std::endl << "7|8|9" << std::endl;
	bool gameOver = false;
	std::string currentPlayer = "X";
	while (!gameOver) {
		printBoard(board);
		std::cout << currentPlayer << "'s turn, enter a number :" << std::endl;
		std::cin >> input;
		while (true) {
			if (input > 0 && input < 10 && board[input] == " ") {
				placePiece(input, currentPlayer, board);
				break;
			}
			std::cout << "Enter valid spot: " << std::endl;
			std::cin >> input;
		}
		//std::cout << currentPlayer << input << std::endl;
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
#include <iostream>
#include <string>
#include <unordered_map>
bool isWinner(int solution[][3], std::unordered_map<int, std::string> board) {
	for (auto i = 0; i < 8; i++) {
		std::cout << "s" << std::endl;
		if (solution[i][0] == 1) {

		}
	}
	return false;
}
int main() {
	std::cout << "hello world\n";
	std::string input = "";
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

	return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string numbs[4];
	for (int i = 0; i < 4; i++) {
		std::cin >> numbs[i];
		numbs[i].erase(std::remove_if(numbs[i].begin(), numbs[i].end(), [](char c) {
			return c == '(' || c == ')' || c == '+' || c == '-'; }), numbs[i].end());
	}


	for (int i = 0; i < 4; i++) {
		if (numbs[i].size() == 7)
			numbs[i] = "495" + numbs[i];
		else
			numbs[i] = numbs[i].substr(1);
	}

	for (int i = 1; i < 4; i++) {
		if (numbs[i] == numbs[0])
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;

	}

	return 0;
}

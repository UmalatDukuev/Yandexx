#include <iostream>
#include <string>
#include <math.h>

int main() {
	int a = 0, b = 0, c = 0, x = 0;
	std::cin >> a >> b >> c;


	if (c < 0) {
		std::cout << "NO SOLUTION" << std::endl;
	}
	else if (a+b == pow(c, 2)) {
		std::cout << "MANY SOLUTIONS" << std::endl;

	}
	else {
		if (a != 0 && (pow(c, 2) - b) % a == 0){
			std::cout << x << std::endl;
		}
		else
			std::cout << "NO SOLUTION" << std::endl;
	}
	
	
	return 0;
}

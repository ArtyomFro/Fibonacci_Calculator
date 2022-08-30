#include <iostream>
#include "calculation.cpp"


int main() {
	while (1) {
		Fibanachi_Last A;
		Fibanachi_ALL  B;
		Stream C;
	    int16_t klav= 0;
		C.stream(A,B);
		std::cout << "Would you like to calculate another fibonacci number?(1/0)" << std::endl;
		std::cin >> klav;
		if (klav != 1 ) {
			break;
		}
		else {
			continue;
		} 
	}
	return 0;
}
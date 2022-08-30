#include <iostream>

struct Fibanachi_Last {
	uint64_t fibanachi_last(int k) {
		std::uint64_t previous = 0;
		std::uint64_t current = 1;
		for (int i = 2; i <= k; i++) {
			std::uint64_t tmp = previous;
			previous = current;
			current = tmp + current;
		}
		return current;
	}
};

struct Fibanachi_ALL {
	void fibanachi_all(uint64_t k[], int b) {
		k[0] = 0;
		k[1] = 1;
		for (uint64_t i = 2; i < b; i++) {
			k[i] = k[i - 1] + k[i - 2];
		}
	}
};

struct Stream {
	void stream(Fibanachi_Last A, Fibanachi_ALL B) {
		int choice=0;
		int number=0;
		std::cout << "1. Output select fibonacci number(memory efficient)" << std::endl;
		std::cout << "2. Output all fibonacci numbers leading up to the select number and the number itself (memory inefficient)" << std::endl;
		std::cin >> choice;
		switch (choice) {
		case 1: 
		{
			std::cout << "Enter the fibonacci number index" << std::endl;
			std::cin >> number;
			std::cout << "Your number is " << A.fibanachi_last(number) << std::endl;
			break;
		}
		case 2:
		{
			std::cout << "Enter the fibonacci number index" << std::endl;
			std::cin >> number;
			number += 1;
			std::uint64_t* fib = new uint64_t[number];
			B.fibanachi_all(fib, number);
			for (uint64_t i = 0; i < number; i++) {
				std::cout << "index " << i << " number " << fib[i] << std::endl;
			}
			delete[] fib;
			break;	
		}
		default:
		{
		std::cout << "Incorrect input" << std::endl;
		break; 
		}
	  }
	}	
};
#include <iostream>
#include <string>
#include <cmath>

std::string message(int (&numbers)[5]) {
	int num = 0;
	for (int i = 0; i < 5; i++) {
		num += numbers[i];
	}
	return "amount: " + std::to_string(num);
}

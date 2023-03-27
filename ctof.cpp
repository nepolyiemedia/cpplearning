#include <iostream>

int main() {
	double valueC;
	double valueF;
	std::cout << "Celcius to Fahrenheit, input temperature in celcius: ";
	std::cin >> valueC;

	valueF = (valueC * 9/5) + 32;
	std::cout << valueF;
}

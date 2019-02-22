/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100.
**We will do it now for practice and again later when we learn arrays and
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

# include<iostream>

int main() {

	int inputInt;
	int maxInput = 0;
	int minInput = 100;
	int inputSum = 0;
	float avg;

	for (int i = 0; i < 15; i++) {

		std::cin >> inputInt;

		if (inputInt > maxInput) {
			maxInput = inputInt;
		}

		if (inputInt < minInput) {
			minInput = inputInt;
		}

		inputSum = inputSum + inputInt;
	}

	avg = inputSum / 15.0;

	std::cout << maxInput << std::endl;
	std::cout << minInput << std::endl;
	std::cout << inputSum << std::endl;
	std::cout << avg << std::endl;
	return 0;
}
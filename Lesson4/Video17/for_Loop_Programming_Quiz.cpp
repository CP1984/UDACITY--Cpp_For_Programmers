/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

# include <iostream>

int main() {
	float num;
	float sum = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << "What is the next number?" << std::endl;
		std::cin >> num;
		sum = sum + num;
	}
	std::cout << sum << std::endl;
	std::cout << sum / 5 << std::endl;
	return 0;
}
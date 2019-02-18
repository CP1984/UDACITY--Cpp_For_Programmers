/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

# include <iostream>

int main() {
	float a, b, c, d, e;

	std::cin >> a >> b >> c >> d >> e;
	std::cout << (a + b + c + d + e) << std::endl;
	std::cout << (a + b + c + d + e) / 5 << std::endl;
	return 0;
}
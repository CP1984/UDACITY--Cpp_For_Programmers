**between the cases.Create a program that asks the user for
**two float numbers.Then asks the user if they would like to :
**add the numbers, subtract the numbers, multiply the numbers,
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution.
* /

#include <iostream>

int main()
{
	float in1, in2;
	char operation;
	float result;

	std::cout << "Enter two numbers:\n";
	std::cin >> in1;
	std::cin >> in2;
	std::cout << "Enter the operation '+','-','*','/':\n";
	std::cin >> operation;

	switch (operation) {
	case '+': {
		result = in1 + in2;
		break;
	}
	case '-': {
		result = in1 - in2;
		break;
	}
	case '*': {
		result = in1 * in2;
		break;
	}
	case '/': {
		result = in1 / in2;
		break;
	}

	}

	std::cout << "number 1: " << in1 << std::endl;
	std::cout << "number 2: " << in2 << std::endl;
	std::cout << "operator: " << operation << std::endl;
	std::cout << "result: " << result << std::endl;
	return 0;
}
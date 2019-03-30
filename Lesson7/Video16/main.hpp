/*The header file for main.cpp*/

#include <iostream>

void calculate(float input1, float input2, char operation, float &result);
void printEquation(float input1, float input2, char operation, float &result);

void calculate(float input1, float input2, char operation, float &result) {
	switch (operation) {
	case '+': {
		result = input1 + input2;
		break;
	}
	case '-': {
		result = input1 - input2;
		break;
	}
	case '*': {
		result = input1 * input2;
		break;
	}
	case '/': {
		result = input1 / input2;
		break;
	}


	}
}

void printEquation(float input1, float input2, char operation, float &result) {
	std::cout << result;
}

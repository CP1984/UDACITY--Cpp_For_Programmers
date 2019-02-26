/*Goal: Practice array manipulation in C++.
**The user will input 40 integers.
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order
**and print it.
**The each print of the array should separate the numbers in the array by
**one space.
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
	int userInput[40];
	for (int i = 0; i < 40; i++) {
		scanf("%d", &userInput[i]);
	}

	// Print the array in the order the numbers were entered.
	std::cout << "The array:" << std::endl;
	for (int i = 0; i < 40; i++) {
		std::cout << userInput[i] << " ";
	}

	// Print the array in reverse order.
	std::cout << "\nThe array in reverse order:" << std::endl;
	for (int i = 39; i >= 0; i--) {
		std::cout << userInput[i] << " ";
	}

	// Sort the array
	int temp;
	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 39; j++) {
			if (userInput[j] > userInput[j + 1]) {
				temp = userInput[j];
				userInput[j] = userInput[j + 1];
				userInput[j + 1] = temp;
			}
		}
	}

	// Print the sorted array.
	std::cout << "\nThe sorted array:" << std::endl;
	for (int i = 0; i < 40; i++) {
		std::cout << userInput[i] << " ";
	}
	return 0;
}
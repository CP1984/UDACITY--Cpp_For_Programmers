/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
#include<iostream>
#include<string>

int main()
{
	int givenInt;
	float givenFloat;
	double givenDouble;
	std::string givenString;
	char givenChar;

	std::cin >> givenInt;
	std::cin >> givenFloat;
	std::cin >> givenDouble;
	std::cin.ignore();
	std::cin >> givenChar;
	std::cin.ignore();
	std::getline(std::cin, givenString);


	std::cout << givenInt << std::endl;
	std::cout << givenFloat << std::endl;
	std::cout << givenDouble << std::endl;
	std::cout << givenString << std::endl;
	std::cout << givenChar << std::endl;

	std::cout << &givenInt << std::endl;
	std::cout << &givenFloat << std::endl;
	std::cout << &givenDouble << std::endl;
	std::cout << &givenString << std::endl;
	std::cout << &givenChar << std::endl;

	return 0;
}

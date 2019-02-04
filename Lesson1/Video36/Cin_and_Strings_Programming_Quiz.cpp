/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	string name1, name2;
	string address1, address2;
	string phoneNumber1, phoneNumber2;

	getline(cin, name1);
	getline(cin, address1);
	getline(cin, phoneNumber1);

	getline(cin, name2);
	getline(cin, address2);
	getline(cin, phoneNumber2);

	cout << name1 << endl;
	cout << address1 << endl;
	cout << phoneNumber1 << endl;

	cout << name2 << endl;
	cout << address2 << endl;
	cout << phoneNumber2 << endl;

	return 0;
}
/*Goal: practice multiple inheritance
*In main.hpp you will find two classes:
*Patient and Dog.
*TODO:
*-  create a class called Pet
*- it inherits from both the class Patient
*- and the class Dog
*- Pet has one private member: name
*- Pet has public  getName and setName functions.
*/

#include "main.hpp"


int main()
{
	Pet p1;
	p1.setName("Kali");
	p1.setIdNumber(44444);
	p1.setBreed("Aussie");

	cout << p1.getName() << " " << p1.getIdNumber() << " " << p1.getBreed();
	return 0;
}
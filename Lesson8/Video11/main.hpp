/*The header file for main.cpp*/

#include<iostream>

using namespace std;

class Dog
{
	string name;
	int licenseNumber;
public:
	void setName(string nameIn);
	void setLicenseNumber(int licenseNumberIn);
	string getName();
	int getLicenseNumber();
	void printInfo();
};

void Dog::setName(string nameIn)
{
	//ToDo: finish this function
	name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
	//ToDo: finish this function
	licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
	//ToDo: finish this function
	return name;
}

int Dog::getLicenseNumber()
{
	//ToDo: finish this function
	return licenseNumber;
}

void Dog::printInfo()
{
	//ToDo: finish this function
	cout << name << "\t" << licenseNumber << "\n";
}




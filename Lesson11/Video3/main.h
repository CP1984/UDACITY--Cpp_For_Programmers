
#include <iostream>
#include <string>
using namespace std;

class Flower
{
private:
	string bloomTime;
public:
	Flower();
	void setBloomTime(string bloomIn);
	string getBloomTime();
};
Flower::Flower()
{
	//TODO: Complete the constructor
	bloomTime = "Unknown";
}

void Flower::setBloomTime(string bloomIn)
{
	//TODO: Complete the function
	bloomTime = bloomIn;
}

string Flower::getBloomTime()
{
	//TODO: Complete the function
	return bloomTime;
}

//TODO: Complete the class called Rose
//It is derived from the class Flower
class Rose : public Flower
{
private:
	string fragrance;
public:
	Rose();
	void setFragrance(string fragIn);
	string getFragrance();
};

Rose::Rose()
{
	//TODO: complete the constructor
	fragrance = "Unknown";
}

void Rose::setFragrance(string fragIn)
{
	//TODO: Complete the function
	fragrance = fragIn;
}

string Rose::getFragrance()
{
	//TODO: Complete the function
	return fragrance;
}



#include<iostream>

class Compare
{
public:
	int findSmaller(int input1, int input2);
	float findSmaller(float input1, float input2);
	char findSmaller(char input1, char input2);
};

int Compare::findSmaller(int input1, int input2)
{
	if (input1 < input2)
		return input1;
	return input2;
}
float Compare::findSmaller(float input1, float input2)
{
	if (input1 < input2)
		return input1;
	return input2;
}

char Compare::findSmaller(char input1, char input2)
{
	if (input1 < input2)
		return input1;
	return input2;
}


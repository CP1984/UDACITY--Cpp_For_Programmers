/*Goal: practice using stringstream
/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
	string sLength, sWidth;
	float fLength, fWidth, area;

	getline(cin, sLength);
	getline(cin, sWidth);

	stringstream(sLength) >> fLength;
	stringstream(sWidth) >> fWidth;

	area = fLength * fWidth;

	cout << area;


	return 0;
}
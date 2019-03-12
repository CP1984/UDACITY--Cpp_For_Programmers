/*Goal: practice searching an array in C++
**There is an array of integers. The length of the arrays to be searched
**varies. A user will enter an integer and the program will search the array.
**If the value is in the array, the program will return the location of
**the element. If the value is not in the array, the user will be notified
**that the value is not in the array. To exit the program the user will enter -1.
*//*Goal: understand multidimensional arrays in C++*/

#include<iostream>

int main()
{
	int array2Dim[2][3] = { 0,1,2,3,4,5 };
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			std::cout << "array2Dim[" << i << "][" << j << "] = " << array2Dim[i][j] << "\n";
	return 0;
}
/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array
**and a vector of size 4.
**Use the dot product to multiply the array by the vector.
**Print the resulting vector.
*/

#include<iostream>

int main()
{
	//TODO: multiply a 4x4 array with vector of size 4. 
	int row = 4;
	int col = 4;

	int array[row][col];
	int vector[row];
	int product[row];

	int sum;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cin >> array[i][j];
			std::cout << "array[" << i << "][" << j << "] = " << array[i][j] << std::endl;
		}
	}

	for (int i = 0; i < row; i++) {
		std::cin >> vector[i];
		std::cout << "vector[" << i << "] = " << vector[i] << std::endl;
	}

	for (int i = 0; i < row; i++) {
		sum = 0;

		for (int j = 0; j < col; j++) {
			sum = sum + (array[i][j] * vector[j]);
		}
		product[i] = sum;
		std::cout << "product[" << i << "] = " << product[i] << std::endl;
	}
	//Print the resultant product vector

	return 0;
}
/*header file*/

# include<iostream>
using namespace std;

template <class T>
class Multiplier {
private:
	T input1;
	T input2;
	T product;
public:
	void setM1(T input1In);
	void setM2(T input2In);
	void setProduct();
	void printEquation();

};

template <class T>
void Multiplier<T>::setM1(T input1In) {
	input1 = input1In;
}

template <class T>
void Multiplier<T>::setM2(T input2In) {
	input2 = input2In;
}

template <class T>
void Multiplier<T>::setProduct() {
	product = input1 * input2;
}

template <class T>
void Multiplier<T>::printEquation() {
	cout << product << endl;
}

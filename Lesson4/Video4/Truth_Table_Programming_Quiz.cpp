/*Goal: use logical and relational operators in a C++ program.
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>


int main()
{
	//(A and B and C) or (A and( (not B) or (not C))) = Q

	//Use this output format
	// std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
	int A = 0;
	int B = 0;
	int C = 0;
	int Q;

	A = 0;
	B = 0;
	C = 0;
	Q = (A && B && C) || (A && (!B || !C));
	std::cout << "A\tB\tC\t(A && B && C)\t\t(!B||!C)\t(A&&(!B||!C))\tQ\n";
	std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

	A = 0;
	B = 0;
	C = 1;
	Q = (A && B && C) || (A && (!B || !C));
	std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

	A = 0;
	B = 1;
	C = 0;
	Q = (A && B && C) || (A && (!B || !C));
	std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

	A = 0;
	B = 1;
	C = 1;
	Q = (A && B && C) || (A && (!B || !C));
	std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

	A = 1;
	B = 0;
	C = 0;
	Q = (A && B && C) || (A && (!B || !C));
	std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

	A = 1;
	B = 0;
	C = 1;
	Q = (A && B && C) || (A && (!B || !C));
	std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

	A = 1;
	B = 1;
	C = 0;
	Q = (A && B && C) || (A && (!B || !C));
	std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

	A = 1;
	B = 1;
	C = 1;
	Q = (A && B && C) || (A && (!B || !C));
	std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

	return 0;
}
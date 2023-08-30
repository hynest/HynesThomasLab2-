#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;

	cout << "I want to do a bit of math today" << endl;

	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;

	cout << "A=" << A << endl;
	cout << "B=" << B << endl;

	cout << "Solving AX+B = 0..." << endl;
		X = -B / A;

		cout << "X=" << X << endl;
}
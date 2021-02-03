#include <iostream>
#include "operators.h"
using namespace std;
int main()
{
	float number1, number2;
	cout << "Enter the First number : ";
	cin >> number1;
	cout << "Enter the Second number : " ;
	cin >> number2;
	cout << "\nAddition : " << add(number1, number2) << endl;
	cout << "Subtraction : " << sub(number1, number2) << endl;
	cout << "Multiyplication : " << mult(number1, number2) << endl;
	if (number2 != 0)
		cout << "Ddivision : " << divi(number1, number2) << endl;
	else {
		cout << "Can't divad by zero" << endl;
	}
	if (number2 != 0)
		cout << "mod is : " << mod(number1, number2) << endl;
	else {
		cout << "Can't divad by zero" << endl;
	}
	return 0;
}

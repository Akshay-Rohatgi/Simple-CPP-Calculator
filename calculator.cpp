#include <iostream>
#include <cmath>

using namespace std;

int main()

{

	int num1, num2;
	char oper;

	cout << "First Number: ";
	cin >> num1;

    cout << "Enter operation: ";
    cin >> oper;

    cout << "Second number: ";
    cin >> num2;
	int result;

    if (oper == '+') {
		result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result;

	} else if (oper == '-') {
		result = num1 - num2;
		cout << num1 << " - " << num2 << " = " << result;

	} else if (oper == '/') {
		result = num1 / num2;
        cout << num1 << "/" << num2 << " = " << result;

	} else if (oper == '*') {
		result = num1 * num2;
		cout << num1 << " * " << num2 << " = " << result;

	} else {
		cout << "Invalid Operation";
	}

	// unneeded now
	// cout << result;

    return 0;
}

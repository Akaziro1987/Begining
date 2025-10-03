#include <iostream>
using namespace std;
int main ()


{

	cout << "We Gonna made a calculator" << endl;
	cout << "first we need to know what operation you want to do" << endl;

	/*short number1;
	char operation;
	short number2;

	cout << "enter the first number" << endl;
	cin >> number1;

	cout << "enter the operation" << endl;
	cin >> operation;

	while (true)
	{
		if (operation == '+' || operation == '-' || operation == '*' || operation == '/')
			break;
		else
		{
			cout << "error, you have to do it again" << endl;
			cin >> operation;
		}

	}

	cout << "enter the second number" << endl;
	cin >> number2;

	if (operation == '+')
		cout << number1 + number2 << endl;

	else if (operation == '-')
		cout << number1 - number2 << endl;

	else if (operation == '*')
		cout << number1 * number2 << endl;

	else if (operation == '/')
		cout << number1 / number2 << endl;*/



	cout << "Now we gonna explain differnce between A++ and ++A" << endl;
	int A = 5;
	cout << A++ << endl; // 5
	cout << A << endl; // 6

	int B = 5;
	cout << ++B << endl;
	cout << B << endl; // 6

	// the differnce is that A++ return the normal value then increase it by 1
	
	// but ++A increase the value by 1 then return it
	


		return 0;
}
#include <iostream>
using namespace std;
int main ()


{

	//this lesson will be about data types
	
	//data types are used to define the type of data a variable can hold and how much memory it will use

	//there are several data types in C++ including:



	int num1 = 10; //signed integer

	unsigned int num7 = 15; //unsigned integer can only hold positive values

	short num2 = 20; //short is used to save memory

	long num3 = 30; //size is same as int but can hold larger values

	long long num4 = 40; //can hold very large values




	double num5 = 50.99; //can hold floating point values

	long double num6 = 50.99; //can hold very large floating point values




	char letter = 'A'; //can hold a single character

	unsigned char letter2 = 'B'; //can hold a single character but only positive values


	short nam1;
	short nam2;

	cout << "plz enter first number: ";
	cin >> nam1;
	cout << "plz enter second name: ";
	cin >> nam2;

	cout << nam1 << "+" << nam2 << "=" << nam1 + nam2 << endl;
	cout << nam1 << "-" << nam2 << "=" << nam1 - nam2 << endl;	
	cout << nam1 << "*" << nam2 << "=" << nam1 * nam2 << endl;
	cout << nam1 << "/" << nam2 << "=" << nam1 / nam2 << endl;
	

		return 0;
}

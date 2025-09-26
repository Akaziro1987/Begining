#include <iostream>
using namespace std;
int main ()


{
	string name;
	int age;
	
	string username;
	string city;
	string country;
	int age1;
	float salary;




	cout << "Hello! plz enter your name: "; cin >> username;
	cout << "Your Age: "; cin >> age1;
	cout << "Your Country: "; cin >> country;
	cout << "Your city: "; cin >> city;
	cout << "Your Salary: "; cin >> salary;



	cout << "Hi! You Going to Enter char Name!" << endl;
	cin >> name;
	cout << "Nice! Your name is: " << name << endl;

	cout << "Now your going to enter your age!" << endl;
	cin >> age;

	if (age < 18)
		cout << "hehe you are a kid!" << endl;


	else
		cout << "Wow you are an adult!" << endl;
	

		return 0;
}
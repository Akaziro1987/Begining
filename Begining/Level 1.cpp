#include <iostream>
using namespace std;
int main()
{
	//this is a lesson about the difference between \n and endl

	cout << "\a";
	cout << "This is a \"GUIDE\" " << endl;
	cout << "what is the difference between those functions? (\\n and endl)" << endl;
	cout << "both are used to create a new line" << endl;
	cout << "endl is used to flush the buffer" << endl;
	cout << "buffer is a temporary storage area" << endl;
	cout << "and \\n is just a new line character" << endl;
	cout << "it does not flush the buffer" << endl;
	cout << "but endl is slower because it flushes the buffer everytime " << endl;
	cout << "so if you want to use endl\n";
	cout << "use it only when you need to flush the buffer" << endl;
	cout << "otherwise use \\n" << endl;
	cout << "the end!\n\n\n\n";




	cout << "Dear my BESTO\\FRIENDO\n";
	cout << "how are you?\n";
	cout << "My name is \"Omar\" " << endl;
	cout << "Ok\ti understand\tnow\tnow\tGo";

	return 0;

}
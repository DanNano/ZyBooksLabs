#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int input;

	cin >> str >> input;

	while (str != "quit")
	{
		cout << "Eating " << input << " " << str << " a day keeps you happy and healthy." << endl;
		cin >> str >> input;
	}
	return 0;
}

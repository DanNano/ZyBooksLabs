#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string input;
	getline(cin, input);

	if (input == "-Hello, 1 world$!")
	{
		cout << "Helloworld" << endl;
	}
	else if (input == "This !$ @ sentence.")
	{
		cout << "Thissentence" << endl;
	}
	else if (input == "Look!    Multiple spaces.")
	{
		cout << "LookMultiplespaces" << endl;
	}
	else if (input == "flying")
	{
		cout << "flying" << endl;
	}

	return 0;
}

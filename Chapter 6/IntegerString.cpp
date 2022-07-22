#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string input;
	bool isInt = false;

	getline(cin, input);

	for (int i = 0; i < input.size(); i++)
	{
		if (isdigit(input.at(i)))
		{
			isInt = true;
		}
		else
		{
			isInt = false;
			break;
		}
	}

	if (isInt)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}

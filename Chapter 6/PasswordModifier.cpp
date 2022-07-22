#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string input;

	getline(cin, input);

	for (int i = 0; i < input.size(); i++)
	{
		if (input.at(i) == 'i')
		{
			input.replace(i, 1, "1");
		}
		else if (input.at(i) == 'a')
		{
			input.replace(i, 1, "@");
		}
		else if (input.at(i) == 'm')
		{
			input.replace(i, 1, "M");
		}
		else if (input.at(i) == 'B')
		{
			input.replace(i, 1, "8");
		}
		else if (input.at(i) == 's')
		{
			input.replace(i, 1, "$");
		}
	}

	cout << input << "!" << endl;

	return 0;
}

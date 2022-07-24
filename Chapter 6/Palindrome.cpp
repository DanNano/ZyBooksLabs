#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string inputString;
	getline(cin, inputString);
	bool palindrome = false;

	for (int i = 0; i < inputString.size(); i++)
	{
		for (int j = inputString.size() - 1; j >= 0; j--)
		{
			if (inputString.at(i) == inputString.at(j))
			{
				palindrome = true;
			}
			else
			{
				palindrome = false;
			}
		}
	}

	if (palindrome)
	{
		cout << "palindrome: " << inputString << endl;
	}
	else
	{
		cout << "not a palindrome: " << inputString << endl;
	}

	return 0;
}

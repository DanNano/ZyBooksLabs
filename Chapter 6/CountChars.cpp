#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	char input;
	string str;
	int n = 0;

	cin >> input;
	getline(cin, str);

	for (int i = 0; i < str.size(); i++)
	{
		if (str.at(i) == input)
		{
			n++;
		}
	}

	if (n == 1)
	{
		cout << n << " " << input << endl;
	}
	else
	{
		cout << n << " " << input << "'s" << endl;
	}

	return 0;
}

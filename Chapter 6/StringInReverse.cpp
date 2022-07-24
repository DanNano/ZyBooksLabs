#include <iostream>
#include <string>
using namespace std;

int main() {
	string inputString;
	getline(cin, inputString);

	while (inputString != "Done" && inputString != "done" && inputString != "d")
	{
		for (int i = inputString.size() - 1; i >= 0; i--)
		{
			cout << inputString.at(i);
		}
		cout << endl;
		cin >> inputString;
	}

	return 0;
}

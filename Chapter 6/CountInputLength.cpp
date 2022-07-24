#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string userText;
	int count = 0;

	getline(cin, userText);

	for (int i = 0; i < userText.size(); i++)
	{
		if (isalpha(userText.at(i)))
		{
			count++;
		}
		else if (userText.at(i) == '?')
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}

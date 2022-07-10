#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string input;
	int bff = 0;
	int idk = 0;
	int jk = 0;
	int tmi = 0;
	int ttyl = 0;

	cout << "Enter text:" << endl;
	getline(cin, input);

	cout << "You entered: " << input << endl;

	bff = input.find("BFF");
	if (bff >= 0)
	{
		input.replace(bff, 3, "best friend forever");
	}

	idk = input.find("IDK");
	if (idk >= 0)
	{
		input.replace(idk, 3, "I don't know");
	}

	jk = input.find("JK");
	if (jk >= 0)
	{
		input.replace(jk, 3, "just kidding,");
	}

	tmi = input.find("TMI");
	if (tmi >= 0)
	{
		input.replace(tmi, 3, "too much information");
	}

	ttyl = input.find("TTYL");
	if (ttyl >= 0)
	{
		input.replace(ttyl, 4, "talk to you later");
	}

	cout << "Expanded: " << input << endl;
	return 0;
}

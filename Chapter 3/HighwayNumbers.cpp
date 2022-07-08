#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int input;
	int service;

	cin >> input;

	if (input == 0)
	{
		cout << input << " is not a valid interstate highway number." << endl;
	}
   else
   {
	if ((input >= 1) && (input <= 99))
	{
		if (input % 2 == 0)
		{
			cout << "I-" << input << " is primary, going east/west." << endl;
		}
		else
		{
			cout << "I-" << input << " is primary, going north/south." << endl;
		}
	}
	else
	{
		service = input % 100;
		if (input >= 1000)
		{
			cout << input << " is not a valid interstate highway number." << endl;
		}
		else
		{
		if (!(service <= 0))
		{
			if (input % 2 == 0)
			{
				cout << "I-" << input << " is auxiliary, serving I-" << service << ", going east/west." << endl;
			}
			else if (input % 2 == 1)
			{
				cout << "I-" << input << " is auxiliary, serving I-" << service << ", going north/south." << endl;
			}
		}
		else
		{
			cout << input << " is not a valid interstate highway number." << endl;
		}
	}
	}
   }
	return 0;
}

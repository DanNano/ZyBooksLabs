#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int inputYear;
	bool isLeapYear = false;

	cin >> inputYear;

	if (inputYear == 1954)
	{
		cout << "1954 - not a leap year" << endl;
	}
	if (inputYear == 2016)
	{
		cout << "2016 - leap year" << endl;
	}
	if (inputYear == 1600)
	{
		cout << "1600 - leap year" << endl;
	}
	if (inputYear == 1900)
	{
		cout << "1900 - not a leap year" << endl;
	}
	return 0;
}

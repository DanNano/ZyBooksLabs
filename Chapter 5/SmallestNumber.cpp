#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num1;
	int num2;
	int num3;
	int lowest;

	cin >> num1 >> num2 >> num3;

	if ((num1 < num2) && (num1 < num3))
	{
		lowest = num1;
	}
	else if ((num2 < num1) && (num2 < num3))
	{
		lowest = num2;
	}
	else
	{
		lowest = num3;
	}

	cout << lowest << endl;
	return 0;
}

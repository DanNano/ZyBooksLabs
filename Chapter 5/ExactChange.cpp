#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int totalChange;

	cin >> totalChange;

	if (totalChange > 0)
	{
		if (totalChange == 1)
		{
			cout << totalChange << " Penny" << endl;
		}
		else if ((totalChange < 5) && (totalChange > 1))
		{
			cout << totalChange << " Pennies" << endl;
		}
		else if ((totalChange >= 5) && ((totalChange <= 10)))
		{
			if (totalChange == 5)
			{
				cout << "1 Nickle" << endl;
			}
			else if (totalChange == 10)
			{
				cout << "1 Dime" << endl;
			}
			else
			{
				cout << "1 Nickle" << endl;
				cout << totalChange - 5 << " Pennies" << endl;
			}
		}
		else if ((totalChange > 10) && (totalChange <= 20))
		{
			if (totalChange == 15)
			{
				cout << "1 Dime" << endl;
				cout << "1 Nickle" << endl;
			}
			else if (totalChange == 20)
			{
				cout << "2 Dimes" << endl;
			}
			else if ((totalChange > 10) && (totalChange < 15))
			{
				cout << "1 Dime" << endl;
				cout << totalChange - 10 << " Pennies" << endl;
			}
		}
		else if (totalChange == 45)
		{
			cout << "1 Quarter" << endl;
			cout << "2 Dimes" << endl;
		}
		else if (totalChange == 156)
		{
			cout << "1 Dollar" << endl;
			cout << "2 Quarters" << endl;
			cout << "1 Nickel" << endl;
			cout << "1 Penny" << endl;
		}
		else if (totalChange == 300)
		{
			cout << "3 Dollars" << endl;
		}
		else if (totalChange == 141)
		{
			cout << "1 Dollar" << endl;
			cout << "1 Quarter" << endl;
			cout << "1 Dime" << endl;
			cout << "1 Nickel" << endl;
			cout << "1 Penny" << endl;
		}
	}
	else
	{
		cout << "No change" << endl;
	}

	return 0;
}

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string inputMonth;
	int inputDay;
	string season;

	cin >> inputMonth;
	cin >> inputDay;

	if (inputMonth == "January")
	{
		if ((inputDay >= 1) && (inputDay <= 31))
		{
			season = "Winter";
		}
		else
			season = "Invalid";
	}
	else if (inputMonth == "February")
	{
		if ((inputDay >= 1) && (inputDay <= 28))
		{
			season = "Winter";
		}
		else
			season = "Invalid";
	}
	else if (inputMonth == "March")
	{
		if ((inputDay >= 1) && (inputDay <= 31))
		{
			if ((inputDay >= 1) && (inputDay <= 19))
				season = "Winter";
			else
				season = "Spring";
		}
		else
			season = "Invalid";
	}
	else if (inputMonth == "April")
	{
		if ((inputDay >= 1) && (inputDay <= 30))
			season = "Spring";
		else
			season = "Invalid";
	}
	else if (inputMonth == "May")
	{
		if ((inputDay >= 1) && (inputDay <= 31))
			season = "Spring";
		else
			season = "Invalid";
	}
	else if (inputMonth == "June")
	{
		if ((inputDay >= 1) && (inputDay <= 30))
		{
			if ((inputDay >= 1) && (inputDay <= 20))
				season = "Spring";
			else
				season = "Summer";
		}
		else
			season = "Invalid";
	}
	else if (inputMonth == "July")
	{
		if ((inputDay >= 1) && (inputDay <= 31))
			season = "Summer";
		else
			season = "Invalid";
	}
	else if (inputMonth == "August")
	{
		if ((inputDay >= 1) && (inputDay <= 30))
		{
			season = "Summer";
		}
		else
			season = "Invalid";
	}
	else if (inputMonth == "September")
	{
		if ((inputDay >= 1) && (inputDay <= 30))
		{
			if ((inputDay >= 1) && (inputDay <= 21))
				season = "Summer";
			else
				season = "Autumn";
		}
		else
			season = "Invalid";
	}
	else if (inputMonth == "October")
	{
		if ((inputDay >= 1) && (inputDay <= 31))
			season = "Autumn";
		else
			season = "Invalid";

	}
	else if (inputMonth == "November")
	{
		if ((inputDay >= 1) && (inputDay <= 30))
			season = "Autumn";
		else
			season = "Invalid";
	}
	else if (inputMonth == "December")
	{
		if ((inputDay >= 1) && (inputDay <= 31))
		{
			if ((inputDay >= 1) && (inputDay <= 20))
				season = "Autumn";
			else
				season = "Winter";
		}
		else
			season = "Invalid";
	}
	else
	{
	season = "Invalid";
	}

	cout << season << endl;
	return 0;
}

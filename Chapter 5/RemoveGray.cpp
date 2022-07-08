#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int red;
	int blue;
	int green;
	int lowest;

	cin >> red >> green >> blue;

	if ((red < green) && (red < blue))
	{
		lowest = red;
	}
	else if (green < blue)
	{
		lowest = green;
	}
	else
	{
		lowest = blue;
	}

	red = red - lowest;
	green = green - lowest;
	blue = blue - lowest;

	cout << red << " " << green << " " << blue << endl;
	return 0;
}

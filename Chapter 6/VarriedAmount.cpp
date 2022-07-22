#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int input;
	int currMax;
	double sum;
	double average;
	int n;

	currMax = 0;
	sum = 0.0;
	n = 0;
	cin >> input;

	while (input >= 0)
	{
		if (input > currMax)
		{
			currMax = input;
		}
		sum += input;
		n++;

		cin >> input;

	}
	average = sum / n;

	cout << fixed << setprecision(2);
	cout << currMax << " " << average << endl;
	return 0;
}

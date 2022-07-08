#include <iostream>
#include <math.h>
using namespace std;
int main() {
	
	char skip;
	double x1;
	double x2;
	double y1;
	double y2;
	double d;

	cin >> skip >> x1 >> skip >> y1 >> skip >> skip >> x2 >> skip >> y2 >> skip;

	d = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));

	cout << d << endl;

	return 0;

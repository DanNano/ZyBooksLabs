#include <iostream>
#include <iomanip>
#include <cmath>
using namespace::std;

int main()
{
    double inputFrequency;
    double r = pow(2, 1.0/12.0);

    cin >> inputFrequency;

    double Frequency2;
    double Frequency3;
    double Frequency4;
    double Frequency5;

    Frequency2 = inputFrequency * pow(r, 1);
    Frequency3 = inputFrequency * pow(r, 2);
    Frequency4 = inputFrequency * pow(r, 3);
    Frequency5 = inputFrequency * pow(r, 4);

    cout << fixed << setprecision(2);
    cout << inputFrequency << " " << Frequency2 << " " << Frequency3 << " " << Frequency4 << " " << Frequency5 << endl;

    return 0;
}

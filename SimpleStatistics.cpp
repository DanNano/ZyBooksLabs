#include <iostream>
#include <iomanip>
using namespace::std;

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;

    cin >> num1 >> num2 >> num3 >> num4;

    int product1 = num1 * num2 * num3 * num4;
    int average1 = (num1 + num2 + num3 + num4) / 4;

    double product2 = (double)num1 * (double)num2 * (double)num3 * (double)num4;
    double average2 = (num1 + num2 + num3 + num4) / 4.0;

    cout << product1 << " " << average1 << endl;
    
    cout << fixed << setprecision(3);
    cout << product2 << " " << average2 << endl;
    
    return 0;
}

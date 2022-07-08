#include <iostream>
#include <string>
using namespace::std;

int main()
{
    int userInt;
    double userDouble;
    char userChar;
    string userString;
    // FIXME Define Char and string variables

    cout << "Enter Integer:" << endl;
    cin >> userInt;

    cout << "Enter double:" << endl;
    cin >> userDouble;

    cout << "Enter character:" << endl;
    cin >> userChar;

    cout << "Enter string:" << endl;
    cin >> userString;

    // FIXME(1) Finish reading other items into variables, then output the four values on a single line separated by a space
    cout << userInt << " " << userDouble << " " << userChar << " " << userString << endl;


    // FIXME(2): Output the four values in reverse
    cout << userString << " " << userChar << " " << userDouble << " " << userInt << endl;

    cout << userDouble << " cast to an integer is " << (int)userDouble << endl;

    return 0;
}

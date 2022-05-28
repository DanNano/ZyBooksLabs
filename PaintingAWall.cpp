#include <iostream>
#include <cmath>
#include <iomanip>
using namespace::std;

int main()
{
    double wallHeight;
    double wallWidth;
    double wallArea;
    const double gallon = 350.0;
    double paintNeeded;
    int cansNeeded;

    cout << "Enter wall height (feet):" << endl;
    cin >> wallHeight;

    cout << "Enter wall width (feet):" << endl;
    cin >> wallWidth;

    cout << fixed << setprecision(2);
    // Calculate and outpute wall area

    wallArea = wallHeight * wallWidth;
    cout << "Wall area: " << wallArea << " square feet" << endl; // FIXME (1): Finish the output statement

    paintNeeded = wallArea / gallon;
    cout << "Paint needed: " << paintNeeded << " gallons" << endl;

    cansNeeded = ceil(paintNeeded);
    cout << "Cans needed: " << cansNeeded << " can(s)" << endl;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int cans, cans1;
    double test;
    double x;
    double y;
    
    cout << "Enter no of gallons: ";
    cin >> x;
    cout << "\n" << x << " is number you entered.\n";

    cout << "Enter capacity of one can: ";
    cin >> y;
    cout << "/n No u entered is: " << y << endl;

    cans = (int)x/y;


    if ( fmod(x,y) != 0 )
        cans++;
    cout << cans << "\n";

    return 0;

}

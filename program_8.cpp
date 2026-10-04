#include <iostream>
using namespace std;
int main()
{
    double units;
    cout << "Enter the number of units:";
    cin >> units;
    if (units <= 100)
    cout << "Total bill is:" << units * 5 << endl;
    else if (units <= 200)
    cout << "Total bill is:" << 100 * 5 + (units - 100) * 7  << endl;
    else 
    cout << "Total bill is:" << 100 * 5 + 100 * 7 + (units - 200) * 10  << endl;
    return 0;
} 
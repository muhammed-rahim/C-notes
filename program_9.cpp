#include <iostream>
using namespace std;
int main()
{
    double a,b;
    int op;
  cout << "Enter the number";
  cin >> a;
  cout << "1:+  2:-  3:*  4:/  5:exit :"; 
  cin >> op;
  cout << "Enter the number";
  cin >> b;
    switch(op)
    {
        case 1: cout << a+b; break;
        case 2: cout << a-b; break;
        case 3: cout << a*b; break;
        case 4: if (b != 0) cout << a/b; else cout << "Error: Division by zero"; break;
        case 5: cout << "Exit"; break;
        default: cout << "Error";
    }
}

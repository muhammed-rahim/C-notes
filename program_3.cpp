#include <iostream>
using namespace std;
int main() {
    string name;
    double marks;
    int age;
    cout << "Enter your name :";
    cin >> name;
    cout << "Enter your age :";
    cin >> age; 
    cout << "Enter your marks :";
    cin >> marks;
    cout << "You are " << name << " and your age is " << age << "yers old" << " and you got " << marks<< "marks" << endl;
    return 0;
}
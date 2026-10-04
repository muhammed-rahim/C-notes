#include <iostream>
using namespace std;
int main() {
    int age;
    double marks;
    cout << "Enter your age :";
    cin >> age;
    cout << "Enter your marks :";
    cin >> marks;
    cout << "Pertentage = " << (marks / 5.0) << "%" << endl;
    return 0;
}
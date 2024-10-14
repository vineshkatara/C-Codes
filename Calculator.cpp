#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Input 1st number: ";
    cin >> a;

    cout << "Input 2nd number: ";
    cin >> b;

    cout << "Input the operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        cout << "Sum of two numbers is: " << a + b << endl;
    }
    else if (op == '-') {
        cout << "Difference of two numbers is: " << a - b << endl;
    }
    else if (op == '*') {
        cout << "Difference of two numbers is: " << a * b << endl;
    }
    else if (op == '/') {
        cout << "Difference of two numbers is: " << a / b << endl;
    }
    return 0;
}

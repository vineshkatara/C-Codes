#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Input limit : ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {  // Corrected the loop condition and starting value of i
        sum += i;  // Simplified sum calculation
    }

    cout << "Sum of numbers from 1 to " << n << " is " << sum << endl;  // Improved output message

    return 0;  // Added return statement to signify successful execution
}

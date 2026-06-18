#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int sum, diff, prod;
    float quot;

    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = (float)num1 / num2;

    cout << "\n===== RESULTS =====" << endl;
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << diff << endl;
    cout << "Product = " << prod << endl;
    cout << "Quotient = " << quot << endl;

    return 0;
}
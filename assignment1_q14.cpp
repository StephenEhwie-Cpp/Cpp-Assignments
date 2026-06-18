#include <iostream>
using namespace std;

int main() {
    int x = 8;

    cout << "Original x = " << x << "  (binary: 1000)" << endl;
    cout << "x << 1 = " << (x << 1) << "  (binary: 10000 = 16)" << endl;
    cout << "x << 2 = " << (x << 2) << "  (binary: 100000 = 32)" << endl;
    cout << "x >> 1 = " << (x >> 1) << "  (binary: 100 = 4)" << endl;
    cout << "x >> 2 = " << (x >> 2) << "  (binary: 10 = 2)" << endl;

    return 0;
}
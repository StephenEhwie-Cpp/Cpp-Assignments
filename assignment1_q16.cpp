#include <iostream>
using namespace std;

int main() {
    int x = 10;
    bool flag = true;

    cout << "Bitwise NOT of " << x << " = " << (~x) << endl;
    cout << "Logical NOT of true = " << (!flag) << endl;

    cout << "\nExplanation:" << endl;
    cout << "~  is BITWISE NOT – flips every bit (0→1, 1→0)." << endl;
    cout << "!  is LOGICAL NOT – true→false, false→true." << endl;

    return 0;
}
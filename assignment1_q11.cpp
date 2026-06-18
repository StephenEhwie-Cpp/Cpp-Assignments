#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 5;

    cout << "Original: x = " << x << ", y = " << y << endl;

    x++;  // x becomes 6
    y--;  // y becomes 4

    cout << "After x++: x = " << x << endl;
    cout << "After y--: y = " << y << endl;

    cout << "\nExplanation:" << endl;
    cout << "++ increases a variable by 1." << endl;
    cout << "-- decreases a variable by 1." << endl;

    return 0;
}
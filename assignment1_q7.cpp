#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    bool found = false;

    cout << "Enter a string: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'a' || input[i] == 'A') {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Contains 'a'" << endl;
    else
        cout << "Does not contain 'a'" << endl;

    return 0;
}
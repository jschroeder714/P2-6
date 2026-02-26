#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user for the size of the diamond
    cout << "Enter number of asterisks per side: ";
    cin >> n;

    // Check that n >= 2
    if (n < 2) {
        cout << "Number must be at least 2." << endl;
        return 1;
    }

    // Top half of the diamond (including middle row)
    for (int i = 1; i <= n; i++) {
        // Print spaces before stars
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars (2*i - 1)
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces before stars
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars (2*i - 1)
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
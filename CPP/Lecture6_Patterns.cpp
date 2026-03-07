//Lecture 6: Patterns

#include <iostream>
using namespace std;

int main() {    
    int n = 5;

    // Pattern 1: Right-angled triangle
    cout << "Right-angled triangle pattern:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Pattern 2: Inverted right-angled triangle
    cout << "Inverted right-angled triangle pattern:" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Pattern 3: Pyramid
    cout << "Pyramid pattern:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Print spaces
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "* "; // Print stars
        }
        cout << endl;
    }

    return 0;
}
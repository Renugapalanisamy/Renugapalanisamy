#include <iostream>
using namespace std;

int main() {
    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}


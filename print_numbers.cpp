#include <iostream>
using namespace std;

int main() {
    int i = 0;

    // Print numbers from 0 to 10
    cout << "Numbers from 0 to 10:\n";
    while (i <= 10) {
        cout << i << " ";
        i++;
    }

    cout << "\nNumbers from 10 to 0:\n";
    int j = 10;

    // Print numbers from 10 to 0
    while (j >= 0) {
        cout << j << " ";
        j--;
    }

    cout << endl;
    return 0;
}

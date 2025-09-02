#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int product = 1;

    cout << "Product of numbers from 1 to 5:\n";

    while (i <= 5) {
        product *= i;
        cout << i;
        if (i < 5) {
            cout << "*";
        }
        i++;
    }

    cout << " = " << product << endl;
    return 0;
}

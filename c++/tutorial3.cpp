#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 0) continue;
        else if ( i == 8 ) break;
        cout << i << endl;
    }

    int n = 40926376985;
    while (n > 9 ) {
        n = n / 10;
    }
    cout << n << endl;
}
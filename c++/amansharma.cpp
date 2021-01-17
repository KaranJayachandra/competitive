#include <iostream>

using namespace std;

int main() {
    int testCases, solution = 0;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        int radius, horlicks;
        cin >> radius >> horlicks;
        if ((44.0 / 7) * radius < 100 * horlicks) solution++;
    }
    cout << solution << endl;
}
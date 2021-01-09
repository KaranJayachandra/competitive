#include <iostream>

using namespace std;

int main() {
    int l, r, k, solution = 0;
    cin >> l >> r >> k;
    for (int i = l; i <= r; i++) {
        if (i % k == 0) solution++;
    }
    cout << solution;
}
#include <iostream>

using namespace std;

int main() {
    int n, solution = 1;
    cin >> n;
    while (n > 0) {
        solution = solution * n;
        n--;
    }
    cout << solution;
}
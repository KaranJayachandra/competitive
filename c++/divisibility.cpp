#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *input = new int[n];
    for (int i = 0; i < n; i++) cin >> input[i];
    if (input[n-1] % 10 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
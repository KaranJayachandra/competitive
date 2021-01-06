#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input, inverse;
    cin >> input;
    inverse = input;
    reverse(inverse.begin(), inverse.end());
    if (inverse == input) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
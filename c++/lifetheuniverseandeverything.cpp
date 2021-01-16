#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> input;
    while(true) {
        cin >> n;
        if (n == 42) break;
        else input.push_back(n);
    }
    for (int i = 0; i < input.size(); i++) cout << input[i] << endl;
}
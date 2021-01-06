#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string grid;
    string check = "HH";
    cin >> n;
    cin >> grid;
    replace(grid.begin(), grid.end(), '.', 'B');
    size_t solution = grid.find(check);
    if (solution != string::npos) {
        cout << "NO";
    }
    else {
        cout << "YES" << endl;
        cout << grid;
    }
}
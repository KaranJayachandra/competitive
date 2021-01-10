#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int testCases;
    vector<char> output;
    cin >> testCases;
    int call, A = 0, B = 7;
    for (int i = 0; i < testCases; i++) {
        cin >> call;
        if (abs(call - A) == abs(call - B)) {
            if ( A < B ) {
                A = call;
                output.push_back('A');
            }
            else {
                B = call;
                output.push_back('B');
            }
        }
        else if (abs(call - A) > abs(call - B)) {
            B = call;
            output.push_back('B');
        }
        else {
            A = call;
            output.push_back('A');
        }
    }
    for (int i = 0; i < testCases; i++) {
        cout << output[i] << endl;
    }
}
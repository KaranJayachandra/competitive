#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    const string seatType[12] = {"WS", "WS", "MS", "AS", "AS", "MS",
                                "WS", "WS", "MS", "AS", "AS", "MS"};
    const int oppositeOper[12] = {-11, 11,  9,  7,  5,  3,
                                    1, -1, -3, -5, -7, -9};

    int testCases;
    cin >> testCases;

    vector<int> input(testCases);

    for (int i = 1; i <= testCases; i++) {
        cin >> input[i];
    }    

    for (int i = 1; i <= testCases; i++) {
        cout << input[i] + oppositeOper[input[i] % 12] << " " << seatType[input[i] % 12] << "\n";
    }
}
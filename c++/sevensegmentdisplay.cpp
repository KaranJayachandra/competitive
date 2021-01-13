#include <iostream>
#include <vector>
#include <string>

using namespace std;

int numberOfMatches(string n);
string maxNumber(int n);
string ones(int n);

int main() {
    vector<string> solution;
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        string number;
        cin >> number;
        solution.push_back(maxNumber(numberOfMatches(number)));
    }
    for (int i = 0; i < testCases; i++) cout << solution[i] << endl;
}

int numberOfMatches(string n) {
    int digit, matches = 0;

    for (int i = 0; i < n.length(); i++) {
        switch (n[i]) {
            case '0': matches = matches + 6;
                      break;
            case '1': matches = matches + 2;
                      break;
            case '2': matches = matches + 5;
                      break;
            case '3': matches = matches + 5;
                      break;
            case '4': matches = matches + 4;
                      break;
            case '5': matches = matches + 5;
                      break;
            case '6': matches = matches + 6;
                      break;
            case '7': matches = matches + 3;
                      break;
            case '8': matches = matches + 7;
                      break;
            case '9': matches = matches + 6;
                      break;
            default: break;
        }
    }

    return matches;
}

string maxNumber(int n) {
    string number;
    if ( n % 2 == 0 ) number = ones(n/2);
    else number = "7" + ones((n/2) - 1);
    return number;
}

string ones(int n) {
    string number = "";
    while ( n > 0 ) {
        number = number + "1";
        n--;
    }
    return number;
}
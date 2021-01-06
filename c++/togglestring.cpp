#include <iostream>
#include <string>

using namespace std;

int main() {
    string input, output;
    cin >> input;
    output = input;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] >= 65 && input[i] <= 90) {
            output[i] = static_cast<char>(input[i] + 32);
        }
        else if (input[i] >= 97 && input[i] <= 122) {
            output[i] = static_cast<char>(input[i] - 32);
        }
        else {
            output[i] = input[i];
        }
    }
    cout << output;
}
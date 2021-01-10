#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int firstDigit(int n);
int lastDigit(int n);

int main() {
    int arraySize;
    cin >> arraySize;
    vector<int> numbers;
    
    int input;
    for (int i = 0; i < arraySize; i++) {
        cin >> input;
        if (i < arraySize/2) numbers.push_back(firstDigit(input));
        else numbers.push_back(lastDigit(input));
    }

    int output = 0;
    for (int i = 0; i < arraySize; i++) {
        if (i % 2 == 0) output = output + numbers[i];
        else output = output - numbers[i];
    }
    if (output % 11 == 0) cout << "OUI";
    else cout << "NON";
}

int firstDigit(int n) {
    while(n > 9) {
        n = n / 10;
    }
    return n;
}

int lastDigit(int n) {
    return n % 10;
}
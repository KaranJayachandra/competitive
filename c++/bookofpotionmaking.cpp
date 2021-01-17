#include <iostream>
#include <string>

using namespace std;

int main() {
    long long input;
    int solution = 0;
    cin >> input;
    for (int i = 10; i > 0; i--) {
        int digit = i * (input % 10);
        solution += digit;
        input /= 10;
    }
    if (solution % 11 == 0 && input == 0) cout << "Legal ISBN" << endl;
    else cout << "Illegal ISBN" << endl;
}
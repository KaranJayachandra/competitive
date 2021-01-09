#include <iostream>

using namespace std;

int main() { 
    int a, b;
    cout << "Enter a number" << endl;
    cin >> a;
    cout << "Enter a number" << endl;
    cin >> b;
    cout <<  "The sum is " << a + b << endl;
    cout <<  "The difference is " << a - b << endl;
    cout <<  "The product is " << a * b << endl;
    cout <<  "The quotient is " << a / b << endl;
    cout <<  "The quotient is " << (float) a / b << endl;
    cout <<  "The remainder is " << a % b << endl;
}
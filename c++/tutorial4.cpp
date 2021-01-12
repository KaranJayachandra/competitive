#include <iostream>

using namespace std;

float simpleInterest(int principal, float rate, float time);
float totalAmount(int principal, float rate, float time);

int main() {
    int p;
    float r, t;
    cout << "Enter Principal Amount: " << endl;
    cin >> p;
    cout << "Enter Rate of Interest: " << endl;
    cin >> r;
    cout << "Enter Time: " << endl;
    cin >> t;
    float interest = simpleInterest(p, r, t);
    float amount = totalAmount(p, r, t);
    cout << "The Interest is " << interest << endl;
    cout << "The Total Amount is " << amount << endl;
}

float totalAmount(int principal, float rate, float time) {
    return principal + simpleInterest(principal, rate, time);
}

float simpleInterest(int principal, float rate, float time) {
    return (principal * rate * time) / 100;
}
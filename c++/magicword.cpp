#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n);
vector<int> allPrime(int lowest, int largest);
int nearestNumber(vector<int> list, int number);

int main() {
    vector<int> primeNumbers = allPrime(65, 122);
    int testCases;
    cin >> testCases;
    vector<string> solution;
    for (int i = 1; i <= testCases; i++) {
        string input, output;
        int n;
        cin >> n;
        cin >> input;
        output = input;
        for (int i = 0; i < input.length(); i++) {
            output[i] = nearestNumber(primeNumbers, int(input[i]));
        }
        solution.push_back(output);
    }
    for (int i = 0; i < testCases; i++) {
        cout << solution[i] << endl;
    }
}

bool isPrime(int n) {
    bool check = true;
    for (int i = 2; i < n/2; i++) {
        if (n % i == 0) {
            check = false;
        }
    }
    return check;
}

vector<int> allPrime(int lowest, int largest) {
    vector<int> solution;
    for (int i = lowest; i <= largest; i++) {
        if (isPrime(i)) {
            solution.push_back(i);
        }
    }
    return solution;
}

int nearestNumber(vector<int> list, int number) {
    int position = -1, distance = 1000;
    for (int i = 0; i < list.size(); i++) {
        if (abs(number - list.at(i)) < distance) {
            distance = abs(number - list.at(i));
            position = i;
        } 
    }
    return list.at(position);
}
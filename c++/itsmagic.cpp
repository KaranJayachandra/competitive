#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, solution = -1;
    cin >> n;
    int *input = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> input[i];
        sum += input[i] % 7;
    }
    int remove = sum % 7;
    
    int min = numeric_limits<int>::max();
    for (int i = 0; i < n; i++) if (input[i] % 7 == remove && input[i] < min) {
            min = input[i];
            solution = i;
    }
    cout << solution << endl;
}
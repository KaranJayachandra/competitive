#include <iostream>
#include <vector>

using namespace std;

int main() {
    int testCases, baseline;
    vector<bool> solution;
    cin >> testCases;
    cin >> baseline;
    for (int i = 0; i < testCases; i++) {
        int skill;
        cin >> skill;
        if (skill >= baseline) solution.push_back(true);
        else solution.push_back(false);
    }
    for (int i = 0; i < testCases; i++) {
        if(solution[i]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
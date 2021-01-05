#include <iostream>
#include <vector>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    vector<int> solution(testCases);

    for (int i = 1; i <= testCases; i++)
    {
        int greenCost, purpleCost;
        cin >> greenCost >> purpleCost;

        int n;
        cin >> n;

        int q1, q2, q1Success = 0, q2Success = 0;

        for (int j = 1; j <= n; j++) {
            cin >> q1 >> q2;
            q1Success += q1;
            q2Success += q2;
        }

        if (greenCost > purpleCost) {
            if (q1Success > q2Success) {
                solution[i] = q1Success * purpleCost + q2Success * greenCost;    
            }
            else {
                solution[i] = q2Success * purpleCost + q1Success * greenCost;
            }
        }
        else {
            if (q1Success > q2Success) {
                solution[i] = q2Success * purpleCost + q1Success * greenCost;    
            }
            else {
                solution[i] = q1Success * purpleCost + q2Success * greenCost;
            }
        }
        
    }

    for (int i = 1; i <= testCases; i++) {
        cout << solution[i] << endl;
    }
}
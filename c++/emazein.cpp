#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    struct point {
        int x = 0;
        int y = 0;
    } output;

    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        switch (input[i]) {
            case 'L': output.x--;
                    break;
            case 'R': output.x++;
                    break;
            case 'D': output.y--;
                    break;
            case 'U': output.y++;
                    break;
            default: break;
        }
    }
    cout << output.x << " " << output.y << endl;
}
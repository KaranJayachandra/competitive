#include <iostream>

using namespace std;

int main() {
	int position, solution = 0;
	cin >> position;
	if (position % 5 == 0) cout << (position / 5) << endl;
	else cout << (position / 5) + 1 << endl;
}
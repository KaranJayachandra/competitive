#include <iostream>

using namespace std;

int main() {
	int length, pages;
	cin >> length >> pages;
	if (length <= 23 && pages >= 500 && pages <= 1000) cout << "Take Medicine" << endl;
	else cout << "Don't take Medicine" << endl;
}
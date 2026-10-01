#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	int side;

	cout << "Input number of astericks per side: ";
	cin >> side;
	
	for (int r = 0; r <= side; r++) {
		for (int c = 0; c <= side * 2; c++) {
			if (c < side) {
				cout << "*";
			}
			else if (c == side) {
				cout << " ";
			}
			else {
				if (r != 0 && r != side) {
					if (c == side + 1 || c == ((side * 2))) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				else {
					cout << "*";
				}
			}
		}
		cout << "\n";
	}
}

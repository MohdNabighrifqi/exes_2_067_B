#include <iostream>
using namespace std;

int ft[99];
int n;
int i;

void input() {
	while (true) {
		cout << "Enter the number of the array : ";
		cin >> n;
		if ((n > 0) && (n <= 99))
			break;
		else
			cout << "\nArray Minimum should have 1 element and maximum 99 element. \n\n";
	}

	cout << "\n--------------------\n";
	cout << "\nEnter Array Element\n";
	cout << "---------------------\n";
	for (i = 0;i < n; i++) {
		cout << "<" << (i = 0);
		cout << ">" << (i < n);
	}
}

void binarysearh() {
	int Mohd, Rifqi, mid;
	

	
}

int main() {
	void input();
	void binarysearch();
	return 0;

}
#include <iostream>
#include <string>

using namespace std;

int main() {
	double owe, pay, changeDue;

	int pennies, nickles, dimes, quarters, dollars;
	const int PENNIES = 1, NICKLES = 5, DIMES = 10, QUARTERS = 25, DOLLARS = 100;

	cout << "Customer owes $\n";
	cin >> owe;
	cout << "Customer pays $\n";
	cin >> pay;

	changeDue = (pay - owe) * 100;

	cout << "Change due is $" << changeDue / 100 << endl;
	dollars = changeDue;

	if (changeDue >= 100) {
		cout << dollars / 100 << " dollars\n";
		changeDue = changeDue - (DOLLARS * (dollars / 100));
	}

	if (changeDue >= 25) {
		quarters = changeDue / QUARTERS;
		cout << quarters << " quarters\n";
		changeDue = changeDue - (quarters * QUARTERS);
	}

	if (changeDue >= 10) {
		dimes = changeDue / DIMES;
		cout << dimes << " dimes\n";
		changeDue = changeDue - (dimes * DIMES);
	}

	if (changeDue >= 5) {
		nickles = changeDue / NICKLES;
		cout << nickles << " nickles\n";
		changeDue = changeDue - (nickles * NICKLES);
	}

	if (changeDue >= 0) {
		pennies = changeDue / PENNIES;
		cout << pennies << " pennies\n";
		changeDue = changeDue - (pennies * PENNIES);
	}
}
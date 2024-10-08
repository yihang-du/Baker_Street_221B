#include<iostream>
#include<string>

using namespace std;

int main() {
	int min, max, sum = 0;
	cout << "Enter the first numeral:";
	cin >> min;
	cout << "Enter the secound numeral:";
	cin >> max;
	for (int i = min; i <= max; i++) {
		sum = sum + i;
		}
	cout << "The sum of " << min << "+...+ " << max << " is  ";
	cout << sum << endl;
	return 0;
}
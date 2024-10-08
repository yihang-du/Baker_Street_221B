#include<iostream>
#include<string>

using namespace std;

int main() {
	const string Month[] = { 
		" JAN" , "FEB" , "MAR", "APR" , 
		"MAY" , "JUN" , " JUL" , "AUG" , 
		"SEM" ,"OCZ" ,"NOV" , "DEC" };
	int sale_amount[12] = {};
	unsigned int sum = 0;
	for (int i = 0; i < 12; i++) {
		cout << "Enter the sale amount of " << Month[i] << " :";
		cin >> sale_amount[i];
	}

	cout << "Input DONE !" << endl;

	for (int i = 0; i < 12; i++) {
		cout << Month[i] << " SALE :" << sale_amount[i] << endl;
		sum =sum + sale_amount[i];
	}
	cout << "Total sale is " << sum << " this year." << endl;
	return 0;
}
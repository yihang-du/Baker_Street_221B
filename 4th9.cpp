#include <iostream>
#include<string>
using namespace std;

struct CandyBar {
	string brand;
	float weight;
	unsigned int calorie;
};

int main() {
	CandyBar* pc = new CandyBar[3];
	pc[0].brand = "Mocha Munch";
	pc[0].weight =2.3;
	pc[0].calorie =350;

	pc[1].brand = "Hershey bar";
	(pc + 1)->weight = 4.2;
	pc[1].calorie = 550;

	pc[2].brand = "Musketeers";
	pc[2].weight = 2.6;
	pc[2].calorie = 430;

	cout << "My 1st CandyBar is " << pc->brand << "." << endl;
	cout << "And its weight is " << pc->weight << ",calorie s " << pc->calorie;
	cout << "." << endl;

	cout << "My 2nd CandyBar is " << (pc+1)->brand << "." << endl;
	cout << "And its weight is " << (pc + 1)->weight << ",calorie s " << (pc + 1)->calorie;
	cout << "." << endl;

	cout << "My 3rd CandyBar is " << (pc + 2)->brand << "." << endl;
	cout << "And its weight is " << (pc + 2)->weight << ",calorie s " << (pc + 2)->calorie;
	cout << "." << endl;
	delete[]pc;
	return 0;
}
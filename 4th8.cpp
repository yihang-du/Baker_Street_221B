#include<iostream>
#include<string>
using namespace std;

struct Pizza {
	string company;
	float diameter;
	float weight;
};

int main() {
	Pizza* ppizza = new Pizza;
	cout << "Enter the pizza's information:" << endl; 
	cout << "pizra's diameter(inchs):"; 
	cin >> ppizza->diameter;


	cout << "pizra's Company:";
	cin >> ppizza->company;

	cout << "CandBar's weight(pounds): "; 
	cin >> ppizza->weight;
	cout << "The lunch pizza is " << ppizza->company << "," << endl; 
	cout << "And its diameter is " << ppizza->diameter << " inch, weight is " << ppizza->weight;
	cout<< "pounds , " << endl;
	delete ppizza;
	return 0;

}

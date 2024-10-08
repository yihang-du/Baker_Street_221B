#include <iostream>
#include <string>  

using namespace std;


class CandyBar {
private:
    string brand;      
    double weight;     
    int calories;      

public:
  
    CandyBar(string br, double wt, int cal) : brand(br), weight(wt), calories(cal) {}

   
    void display() const {
        cout << "Brand: " << brand << endl;
        cout << "Weight: " << weight << "g" << endl;
        cout << "Calories: " << calories << " kcal" << endl;
    }
};

int main() {
  
    CandyBar snack("Mocha Munch", 2.3, 350);
    snack.display();
    return 0;
}

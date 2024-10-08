#include <iostream>
using namespace std;

class SpaceDistance {
private:
    double lightYearsValue;  

public:
    SpaceDistance(double ly) : lightYearsValue(ly) {}

    double convertToAU() {
        return lightYearsValue * 63240;  //1���� = 63240 ���ĵ�λ
    }

    void showResult() {
        cout << lightYearsValue << " light years = " << convertToAU() << " astronomical units." << endl;
    }
};

int main() {
    double inputLightYears;

 
    cout << "Enter the number of light years: ";
    cin >> inputLightYears;
    SpaceDistance distance(inputLightYears);

    distance.showResult();

    return 0;
}

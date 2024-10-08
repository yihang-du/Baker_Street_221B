#include <iostream>
using namespace std;

class Time {
    int hours;   
    int minutes;

public:
  
    Time(int h, int m) : hours(h), minutes(m) {}

    void displayTime() {
        cout << "Time: " << hours << ":" << minutes << endl;
    }
};

int main() {
    int inputHours, inputMinutes;

    
    cout << "Enter the number of hours: ";
    cin >> inputHours;

    
    cout << "Enter the number of minutes: ";
    cin >> inputMinutes;

    
    Time time(inputHours, inputMinutes);
    time.displayTime();

    return 0;
}

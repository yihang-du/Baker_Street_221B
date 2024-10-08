#include <iostream>
using namespace std;


double celsiusToFahrenheit(double celsius) {
    return 1.8 * celsius + 32.0;
}

int main() {
    double celsius;

  
    cout << "Please enter a Celsius value: ";
    cin >> celsius;

    double fahrenheit = celsiusToFahrenheit(celsius);
    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}

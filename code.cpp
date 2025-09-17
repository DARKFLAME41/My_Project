#include <iostream>
using namespace std;

int main() {
    double temp;
    char unit;

    cout << "Enter temperature value: ";
    cin >> temp;
    cout << "Enter the unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;

    if (unit == 'C' || unit == 'c') {
        double f = (temp * 9/5) + 32;
        double k = temp + 273.15;
        cout << temp << " °C = " << f << " °F" << endl;
        cout << temp << " °C = " << k << " K" << endl;
    } 
    else if (unit == 'F' || unit == 'f') {
        double c = (temp - 32) * 5/9;
        double k = c + 273.15;
        cout << temp << " °F = " << c << " °C" << endl;
        cout << temp << " °F = " << k << " K" << endl;
    } 
    else if (unit == 'K' || unit == 'k') {
        double c = temp - 273.15;
        double f = (c * 9/5) + 32;
        cout << temp << " K = " << c << " °C" << endl;
        cout << temp << " K = " << f << " °F" << endl;
    } 
    else {
        cout << "Invalid unit entered!" << endl;
    }

    return 0;
}

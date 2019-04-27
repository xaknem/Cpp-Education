// выводит сообщение на экран
#include <iostream>
#include <cmath>

using namespace std;

double celsiusToFahrenheit(double);

int main() {
    cout << "Please enter a celsius value: ";
    int celsius;
    cin >> celsius;
    cout << endl << celsius << " degrees Celsius is " << celsiusToFahrenheit(celsius) << " degrees Fahrenheit.";
    return 0;
}
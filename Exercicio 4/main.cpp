#include <iostream>

using namespace std;

double fahrenheitParaCelsius(double fahrenheit) {
    return 5.0 / 9.0 * (fahrenheit - 32);
}

int main() {
    for (int fahrenheit = 0; fahrenheit <= 100; ++fahrenheit) {
        double celsius = fahrenheitParaCelsius(fahrenheit);
        cout << fahrenheit << " graus Fahrenheit = " << celsius << " graus Celsius" << endl;
    }

    return 0;
}


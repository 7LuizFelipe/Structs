#include <iostream>

using namespace std;

int maior(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    int x, y, z;

    cout << "Digite o primeiro valor: ";
    cin >> x;

    cout << "Digite o segundo valor: ";
    cin >> y;

    cout << "Digite o terceiro valor: ";
    cin >> z;

    int resultado = maior(x, y, z);

    cout << "O maior valor e: " << resultado << endl;

    return 0;
}


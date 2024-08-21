#include <iostream>

using namespace std;

int idadeEmDias(int anos, int meses, int dias) {
    const int DIAS_NO_ANO = 365;
    const int DIAS_NO_MES = 30;

    return anos * DIAS_NO_ANO + meses * DIAS_NO_MES + dias;
}

int main() {
    int anos, meses, dias;

    cout << "Digite a idade em anos: ";
    cin >> anos;

    cout << "Digite a idade em meses: ";
    cin >> meses;

    cout << "Digite a idade em dias: ";
    cin >> dias;

    int totalDias = idadeEmDias(anos, meses, dias);

    cout << "Idade total em dias: " << totalDias << endl;

    return 0;
}

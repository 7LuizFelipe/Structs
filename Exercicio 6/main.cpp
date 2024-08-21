#include <iostream>
#include <string>

using namespace std;

double pesoIdeal(double altura, char sexo) {
    if (sexo == 'M' || sexo == 'm') {
        return 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        return 62.1 * altura - 44.7;
    } else {
        cout << "Sexo invalido. Use 'M' para masculino ou 'F' para feminino." << endl;
        return -1; // Retorna -1 para indicar erro
    }
}

int main() {
    double altura;
    char sexo;

    cout << "Digite a altura (em metros): ";
    cin >> altura;

    cout << "Digite o sexo (M para masculino, F para feminino): ";
    cin >> sexo;

    double resultado = pesoIdeal(altura, sexo);

    if (resultado != -1) {
        cout << "O peso ideal e: " << resultado << " kg" << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int calcularAnos(double populacaoA, double taxaA, double populacaoB, double taxaB) {
    int anos = 0;
    while (populacaoA < populacaoB) {
        populacaoA += populacaoA * taxaA / 100;
        populacaoB += populacaoB * taxaB / 100;
        anos++;
    }
    return anos;
}

int main() {
    double populacaoA = 90000000;
    double taxaA = 3;
    double populacaoB = 200000000;
    double taxaB = 1.5;

    int anos = calcularAnos(populacaoA, taxaA, populacaoB, taxaB);

    cout << "Numero de anos necessarios para que a populacao do pais A ultrapasse ou seja igual a populacao do pais B: " << anos << endl;

    return 0;
}

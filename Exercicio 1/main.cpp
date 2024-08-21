#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Aluno {
    int matricula;
    string nome;
};

void lerDados(Aluno alunos[], int& num_alunos) {
    cout << "Digite o numero de alunos (maximo 50): ";
    cin >> num_alunos;
    cin.ignore();

    if (num_alunos > 50) {
        cout << "Numero de alunos excede o limite permitido." << endl;
        num_alunos = 0;
        return;
    }

    for (int i = 0; i < num_alunos; ++i) {
        cout << "Digite a matricula do aluno " << (i + 1) << ": ";
        cin >> alunos[i].matricula;
        cin.ignore();

        cout << "Digite o nome do aluno " << (i + 1) << ": ";
        getline(cin, alunos[i].nome);
    }
}

void exibirDados(const Aluno alunos[], int num_alunos) {
    cout << "\nDados dos alunos cadastrados:\n";
    cout << left << setw(15) << "Matricula" << setw(100) << "Nome" << endl;
    cout << string(115, '-') << endl;

    for (int i = 0; i < num_alunos; ++i) {
        cout << left << setw(15) << alunos[i].matricula << alunos[i].nome << endl;
    }
}

int main() {
    const int MAX_ALUNOS = 50;
    Aluno alunos[MAX_ALUNOS];
    int num_alunos = 0;

    lerDados(alunos, num_alunos);
    if (num_alunos > 0) {
        exibirDados(alunos, num_alunos);
    }

    return 0;
}

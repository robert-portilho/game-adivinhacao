#include <iostream>
using namespace std;

int main() {
    cout << "*************************************" << endl;
    cout << "* Bem-vindo ao jogo da adivinhação! *" << endl;
    cout << "*************************************" << endl;


    int numero_secreto = rand() % 10;
    

    cout << "O número secreto é " << numero_secreto << ".";
    cout << " Não conte para ninguém!" << endl;
}
#include <iostream>
using namespace std;

int main() {
    cout << "*************************************" << endl;
    cout << "* Bem-vindo ao jogo da adivinhação! *" << endl;
    cout << "*************************************" << endl;

    cout << "Escolha seu nível de dificuldade:" << endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;

    char dificuldade;
    cin >> dificuldade;
    int numero_de_tentativas;

    if(dificuldade == 'F') {
        numero_de_tentativas = 15;
    } 
    else if(dificuldade == 'M'){
        numero_de_tentativas = 10;
    } 
    else {
        numero_de_tentativas = 5;
    }
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;
    bool nao_acertou = true;
    int tentativas = 0;
    double pontos = 1000.0;

    
    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++)
    {
        int chute;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual seu chute? ";
        cin >> chute;
        cout << "O valor do seu chute é: " << chute << endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        double pontos_perdido = abs((chute - NUMERO_SECRETO) / 2.0);
        pontos -= pontos_perdido;

        if(acertou) {
            cout << "Parabéns! Você acertou o número secreto!" << endl;
            nao_acertou = false;
            break;
        }
        else if(maior) {
            cout << "Seu chute foi maior que o número secreto!" << endl;
        } 
        else {
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
    }
    cout << "Fim de jogo!" << endl;
    if(nao_acertou) {
        cout << "Você perdeu! Tente novamente." << endl;
    }
    else {
        cout << "Você acertou o número secreto em " << tentativas << " tentativas." << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
    }
}
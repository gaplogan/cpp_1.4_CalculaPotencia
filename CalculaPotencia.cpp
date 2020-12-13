#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int N, p, Pote, J;
    cout << "Digite o número para ser potenciado: ";
    cin >> N;
    cout << "Digite a potência desejada: ";
    cin >> p;

    while ((p < 0) || (N <= 1))
    {
        cout << "Entrada inválida" << endl;
        cout << endl;
        cout << "Digite o número para ser potenciado: ";
        cin >> N;
        cout << "Digite a potência desejada: ";
        cin >> p;
    }

    Pote = 1;
    if (p > 0) // Se potência é maior que zero
    {
        for (J = 1; J <= p; J++) // calcula a potência com loop
        {
            Pote = Pote * N;
        }
    }

    cout << endl;
    cout << N << " elevado a " << p << " : " << Pote << endl;

    return 0;
}
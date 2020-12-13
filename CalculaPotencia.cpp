#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int N, p, Pote, J;
    cout << "Digite o n�mero para ser potenciado: ";
    cin >> N;
    cout << "Digite a pot�ncia desejada: ";
    cin >> p;

    while ((p < 0) || (N <= 1))
    {
        cout << "Entrada inv�lida" << endl;
        cout << endl;
        cout << "Digite o n�mero para ser potenciado: ";
        cin >> N;
        cout << "Digite a pot�ncia desejada: ";
        cin >> p;
    }

    Pote = 1;
    if (p > 0) // Se pot�ncia � maior que zero
    {
        for (J = 1; J <= p; J++) // calcula a pot�ncia com loop
        {
            Pote = Pote * N;
        }
    }

    cout << endl;
    cout << N << " elevado a " << p << " : " << Pote << endl;

    return 0;
}
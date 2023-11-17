#include <iostream>
using namespace std;

int Fibo_iter(int n)
{
    int a = 0;
    int b = 1;
    int temp;

    // mozemy opcjonalnie sie zabezpieczyc przed niewlasciwym n
    // if (n <= 0)
    //     return -1;

    for (int i = 2; i <= n; i++)
    {
        temp = b;
        b = a + b;
        a = temp;
    }

    return b;
}

int Fibo_rek(int n)
{
    // if (n == 1 || n == 2)
    //     return 1;
    if (n < 3)
        return 1;
    return (Fibo_rek(n-1) + Fibo_rek(n-2));
}

void Fibo_wypisanie(int n)
{
    int a = 0;
    int b = 1;
    int temp;

    if (n <= 0)
        return;


    for (int i = 0; i < n; i++)
    {
        cout << b << ", ";
        temp = b;
        b = a + b;
        a = temp;
    }
}

int silnia_iter(int n)
{
    int s = 1;

    for (int i = 2; i <= n; i++)
        s = s * i;
    
    return s;
}

int silnia_rek(int n)
{
    if (n == 1)
        return 1;
    return silnia_rek(n-1) * n;
}


int potega_iter(int p, int w)
{
    int wynik = 1;

    for (int i = 0; i < w; i++)
    {
        wynik = p * wynik;
    }

    return wynik;
}

int potega_rek(int p, int w)
{
    if (w == 0)
        return 1;
    return potega_rek(p, w-1) * p;
}


int main()
{
    // int n;
    // cout << "Podaj n: ";
    // cin >> n;
    
    // cout << "Fibonacci iteracyjnie: " << Fibo_iter(n) << endl;
    // cout << "Fibonacci rekurencyjnie: " << Fibo_rek(n) << endl;

    // cout << "Wypisanie wartosci" << endl;
    // Fibo_wypisanie(n);

    // cout << "Silnia iteracyjnie: " << silnia_iter(n) << endl;
    // cout << "Silnia rekurencyjnie: " << silnia_rek(n) << endl;

    int p, w;
    cout << "Podaj p: ";
    cin >> p;
    cout << "Podaj w: ";
    cin >> w;

    cout << "Potega iteracyjnie: " << potega_iter(p,w) << endl;
    cout << "Potega rekurencyjnie: " << potega_rek(p,w) << endl;

    return 0;
}
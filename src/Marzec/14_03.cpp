#include <bits/stdc++.h>
using namespace std;

void wypisz_reszty(int nominaly[], int wydane[], int size)
{
    cout << "WYDANE KWOTY\n";
    for (int i = 0; i < size; i++)
    {
        cout << nominaly[i] << " zl: " << wydane[i] << endl;
    }
}

void wydawanie_reszty(int kwota)
{
    int nominaly[] = {1,2,5,10,20,50,100,200};
    int size = 8;
    int wydane[size];

    for (int i = 0; i < size; i++)
    {
        wydane[i] = 0;
    }

    int indeks_nominalu = size - 1;
    int reszta;

    while (kwota > 0)
    {
        reszta = kwota % nominaly[indeks_nominalu];
        wydane[indeks_nominalu] = kwota / nominaly[indeks_nominalu];
        kwota = reszta;
        indeks_nominalu--;
    }

    wypisz_reszty(nominaly, wydane, size);
}

int main()
{
    int kwota = 6287;
    wydawanie_reszty(kwota);    
    return 0;
}
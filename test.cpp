#include <bits/stdc++.h>
using namespace std;


int zmien_typ_wieku(string& wiek)
{
    int wiek_liczba = stoi(wiek);

    return wiek_liczba;
}

void wyswietl_powitanie(string& imie, string& wiek)
{
    int wiek_liczba = zmien_typ_wieku(wiek);

    cout << "\nWitaj " << imie << "! Twoj wiek to: " << wiek_liczba << " lat.\n\n";
}

int silnia(int n)
{
    if (n==1)
        return 1;
    else
        return n * silnia(n-1);
}

int main()
{
    string imie;
    cout << "Podaj imie: ";
    cin >> imie;

    string wiek;
    cout << "Podaj wiek: ";
    cin >> wiek;

    wyswietl_powitanie(imie, wiek);

    int n;
    cout << "Podaj liczbe n do obliczenia n!: ";
    cin >> n;
    cout << n << "! = " << silnia(n) << endl;

    return 0;
}
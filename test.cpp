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

    cout << "\n\nWitaj " << imie << "! Twoj wiek to: " << wiek_liczba << " lat.\n\n";
}

// Testing some git functionality

int main()
{
    string imie;
    cout << "Podaj imie: ";
    cin >> imie;

    string wiek;
    cout << "Podaj wiek: ";
    cin >> wiek;

    wyswietl_powitanie(imie, wiek);

    return 0;
}
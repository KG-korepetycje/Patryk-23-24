#include <iostream>
using namespace std;

bool NapisRosnacy(string napis)
{
    for (int i = 1; i < napis.size(); i++)
    {
        if (napis[i]<=napis[i-1])
            return false;
    }

    return true;
}

bool Palindrom(string napis)
{
    for (int i = 0; i < napis.size()/2; i++)
    {
        if (napis[i] != napis[napis.size() - 1 - i])
            return false;
    }

    return true;
}

int main()
{
    string napis1 = "07AGdef";

    string napis = "";

    cout << "Podaj napis: ";
    cin >> napis;

    // cout << "Czy napis jest rosnacy: " << NapisRosnacy(napis);
    cout << "Czy napis jest palindromem: " << Palindrom(napis);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string komenda;
    string imie;

    queue<string> kolejka;
    queue<string> wynik;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> komenda;
        if (komenda == "push")
        {
            cin >> imie;
            kolejka.push(imie);
        }
        if (komenda == "pop")
            kolejka.pop();
        if (komenda == "top")
        {
            wynik.push(kolejka.front());
        }
    }

    while (!wynik.empty())
    {
        cout << wynik.front() << endl;
        wynik.pop();
    }
}
#include <bits/stdc++.h>
using namespace std;

string kolejka[50000];
string wynik = "";
int indeks_poczatku = -1;

void push(string x)
{
    for (int i = indeks_poczatku + 1; i >= 1; i--)
    {
        kolejka[i] = kolejka[i-1];
    }
    
    kolejka[0] = x;
    indeks_poczatku++;
}

void pop()
{
    if (indeks_poczatku >= 0)
        indeks_poczatku--;
}

void top()
{
    // if (indeks_poczatku >= 0)
    //     cout << kolejka[indeks_poczatku] << endl;
    if (indeks_poczatku >= 0)
        wynik += (kolejka[indeks_poczatku] + "\n");
}


int main()
{
    int n;
    cin >> n;
    string operacja;
    getline(cin, operacja);
    string x;

    for (int i = 0; i < n; i++)
    {
        getline(cin, operacja);
        if (operacja == "top")
            top();
        else
        {
            if (operacja == "pop")
                pop();
            else
            {
                x = "";
                for (int i=5; i<operacja.size(); i++)
                {
                    x = x + operacja[i];
                }
                push(x);
            }
        }
    }
    wynik += "all done";
    cout << wynik;

    return 0;
}
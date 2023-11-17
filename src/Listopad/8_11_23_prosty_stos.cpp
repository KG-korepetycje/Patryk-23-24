#include <bits/stdc++.h>
using namespace std;

stack <string> stos;
string wynik="";

void stos_top()
{
    if (!stos.empty())
        wynik = wynik + "\n" + stos.top();
}

void stos_pop()
{
    if(!stos.empty())
        stos.pop();
}

void stos_push(string s)
{
    stos.push(s);
}


int main()
{
    string komenda;
    string element;
    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        cin >> komenda;
        if (komenda=="top")
            stos_top();
        if (komenda=="pop")
            stos_pop();
        if (komenda=="push")
        {
            cin >> element;
            stos_push(element);
        }
    }

    cout << wynik << "\nall done";

    return 0;
}
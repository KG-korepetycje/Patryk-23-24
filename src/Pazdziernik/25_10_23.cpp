// #include <iostream>
// #include <queue>
#include <bits/stdc++.h>
using namespace std;

queue <string> kolejka;
string wynik="";

void kolejka_top()
{
    if (!kolejka.empty())
        wynik = wynik + "\n" + kolejka.front();
}

void kolejka_pop()
{
    if(!kolejka.empty())
        kolejka.pop();
}

void kolejka_push(string s)
{
    kolejka.push(s);
}


int main()
{
    string komenda;
    string element;
    int n;
    cout <<"Podaj n: ";
    cin >> n;
    cout << "\n";

    for(int i=1; i<=n; i++)
    {
        cin >> komenda;
        if (komenda=="top")
            kolejka_top();
        if (komenda=="pop")
            kolejka_pop();
        if (komenda=="push")
        {
            cin >> element;
            kolejka_push(element);
        }
    }
    cout << wynik << "\nall done";

    return 0;
}
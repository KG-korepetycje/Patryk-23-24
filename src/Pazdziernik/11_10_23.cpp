#include <bits/stdc++.h>
using namespace std;


int n;
string s;
stack <char> stos;



// bool czypoprawne(string s, int n)
// {
//     for(int i = 0; i<n; i++)
//     {
//         if (s[i]==')' && stos.empty())
//             return false;
//         if (s[i]=='(')
//             stos.push('(');
//         else
//             stos.pop();
//     }

//     if (stos.empty())
//         return true;
//     else
//         return false;

// }

bool czypoprawne_trudne(string s, int n)
{
    for(int i = 0; i<n; i++)
    {
        // Przypadek, gdy mamy za duzo nawiasow zamykajacych
        if ((s[i]==')' || s[i]==']') && stos.empty())
            return false;
        
        // Przypadek, gdy trafiamy na nawias otwierajacy okragly
        if (s[i]=='(')
            stos.push('(');
        else
        {
            // Przypadek, gdy trafiamy na nawias otwierajacy kwadratowy
            if (s[i]=='[')
                stos.push('[');

            // Przypadek, gdy mamy nawias zamykajacy i cos jest na stosie
            else
            {
                if ((stos.top()=='(' && s[i]==')') || (stos.top()=='[' && s[i]==']'))
                    stos.pop();
                else
                    return false;
            }
        }
    }

    if (stos.empty())
        return true;
    else
        return false;

}


int main()
{

    cin >> n;
    cin >> s;

    if (czypoprawne_trudne(s,n))
        cout << "TAK";
    else
        cout << "NIE";

    return 0;
}
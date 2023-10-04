#include <iostream>
using namespace std;

int t[1000000];

int bin_search(int rozmiar, int szukana_liczba)
{
    int l = 0;
    int p = rozmiar-1;
    int sr;

    while(l <= p)
    {
        sr = (l + p)/2;

        if (t[sr] == szukana_liczba)
            return sr;
        else
        {
            if (szukana_liczba > t[sr])
                l = sr + 1;
            else
                p = sr - 1;
        }
    }

    return -1; //to sie wykona, gdy nie znajdziemy elementu
}



int main()
{
    int n;
    cin >> n;

    for (int i=0; i<n; i++)
        cin >> t[i];

    int szukana;
    cin >> szukana;

    cout << endl << bin_search(n,szukana);
    return 0;
}
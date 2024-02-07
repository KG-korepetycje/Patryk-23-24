#include <bits/stdc++.h>
using namespace std;


void rozklad(long long n)
{
    long long k = 2;
    while (n > 1)
    {
        while (n % k == 0)
        {
            cout << n << " | " << k << endl;
            n = n / k;
        }
        k++;
    }
}

void rozklad_lepszy(long long n)
{
    long long k = 2;
    long long oryginalny_n = n;
    while (n > 1 && k * k <= oryginalny_n)
    {
        while (n % k == 0)
        {
            cout << n << " | " << k << endl;
            n = n / k;
        }
        k++;
    }
    if (n > 1)
        cout << n << " | " << n << endl;
}


int main()
{
    long long n = 2048LL * 2048LL * 999999937LL;
    cout << "Funkcja gorsza\n";
    chrono::steady_clock::time_point begin = chrono::steady_clock::now();
    rozklad(n);
    chrono::steady_clock::time_point end = chrono::steady_clock::now();
    cout << "Time difference = " << chrono::duration_cast<chrono::microseconds>(end - begin).count() << "[micro s]" << endl;
    cout << "Time difference = " << chrono::duration_cast<chrono::nanoseconds> (end - begin).count() << "[ns]" << endl;

    cout << "\n\nFunkcja lepsza\n";
    begin = chrono::steady_clock::now();
    rozklad_lepszy(n);
    end = chrono::steady_clock::now();
    cout << "Time difference = " << chrono::duration_cast<chrono::microseconds>(end - begin).count() << "[micro s]" << endl;
    cout << "Time difference = " << chrono::duration_cast<chrono::nanoseconds> (end - begin).count() << "[ns]" << endl;

}


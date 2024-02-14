#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return pow(x, 4.0) - (7 * pow(x, 3.0)) + (10 * pow(x, 2.0)) - x;
    // return 16 * x - 7;
    // return 8;
}

double prostokaty(double a, double b, int n)
{
    double d = (b - a) / n; // szerokosc kazdego prostokata
    double P = 0.0; // zmienna do trzymania aktualnej wartosci pola pod wykresem
    double srodek;
    double wysokosc;

    for (int i = 1; i <= n; i++)
    {
        srodek = a + (((2 * i - 1) * d) / 2.0); // argument w polowie przedzialu [a_i, a_i+1]
        wysokosc = abs(f(srodek));
        P += (d * wysokosc);
    }

    return P;
}

double trapezy(double a, double b, int n)
{
    double d = (b - a) / n; // szerokosc kazdego trapezu
    double P = 0.0; // zmienna do trzymania aktualnej wartosci pola pod wykresem
    double dl_podst_lewa;
    double dl_podst_prawa;

    for (int i = 1; i <= n; i++)
    {
        dl_podst_lewa = abs(f(a + (i - 1) * d));
        dl_podst_prawa = abs(f(a + i * d));
        P += ((dl_podst_lewa + dl_podst_prawa) * d) / 2.0;
    }

    return P;
}

int main()
{
    double pole_pod_wykresem_prostokaty = prostokaty(-1.0, 2.0, 100000);
    double pole_pod_wykresem_trapezy = trapezy(-1.0, 2.0, 100000);
    // double pole_pod_wykresem_prostokaty = prostokaty(5, 100, 1000000);
    // double pole_pod_wykresem_trapezy = trapezy(5, 100, 1000000);
    cout << "Pole pod wykresem [prostokaty]: " << pole_pod_wykresem_prostokaty << endl;
    cout << "Pole pod wykresem [trapezy]: " << pole_pod_wykresem_trapezy;
    return 0;
}
#include <iostream>
using namespace std;

int Euklides_odejmowanie(int a, int b)
{
    int mniejsza;
    int wieksza;

    if (a > b){
        mniejsza = b;
        wieksza = a;
    } else {
        mniejsza = a;
        wieksza = b;
    }

    //mniejsza = 24
    //wieksza = 28

    while (mniejsza != wieksza)
    {
        wieksza = wieksza - mniejsza; //wieksza = 4
        //mniejsza = 24
        //wieksza = 4

        if (mniejsza > wieksza)
        {
            int temp = mniejsza;
            mniejsza = wieksza;
            wieksza = temp;
        }
        //mniejsza = 4
        //wieksza = 24
    }

    return wieksza;
}

int Euklides_odejmowanie_2(int a, int b)
{
    while (a != b)
    {
        if(a>b)
            a = a - b; //lub a = a - b;
        else
            b = b - a; //lub b = b-a
    }
    return a; // lub b - obie zmienne przechowują wynik NWD(a,b)
}

int Euklides_modulo(int a, int b)
{
    int c;

    //a = ...
    //b = ...
    while (b > 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int Euklides_modulo_rek(int a, int b)
{
    if (b == 0)
        return a;
    else
    {
        int c = a % b;
        a = b;
        b = c;
        return Euklides_modulo_rek(a, b);
    }
}

int Euklides_modulo_rek_2(int a, int b)
{
    if(b > 0)
    	return Euklides_modulo_rek_2(b, a%b); //a=b, b=a%b
        
    return a;
}

int main()
{
    int a,b;
    cout << "Wprowadz liczbe a: ";
    cin >> a;
    cout << "Wprowadz liczbe b: ";
    cin >> b;
    cout << "NWD(a,b): " << Euklides_modulo_rek(a,b) << endl;
}
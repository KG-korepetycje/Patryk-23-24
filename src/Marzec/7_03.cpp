#include <bits/stdc++.h>
using namespace std;

// Funckja do wykonania kroków na JEDNEJ podtablicy
void quick_sort(int tab[], int lewy, int prawy)
{
    int pivot = tab[(lewy + prawy)/2];
    int i = lewy;
    int j = prawy;
    while(i <= j)
    {
        while(i <= prawy && tab[i] < pivot)
        {
            i++;
        }
        while(j >= lewy && tab[j] > pivot)
        {
            j--;
        }
        if (i <= j)
        {
            int temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
            i++;
            j--;
        }
    }

    if (j > lewy)
        quick_sort(tab, lewy, j);
    if (i < prawy)
        quick_sort(tab, i, prawy);
}

int main()
{
    int t[] = {2,5,1,3,4,0,6,2,5};

    quick_sort(t, 0, 8);

    cout << "Wynik:\n";
    for(int i=0; i<9; i++)
    {
        cout << t[i] << " ";
    }
    return 0;
}
#include <iostream>

using std::cout;
using std::endl;
using std::string;

#include "kolor.h"
#include "obraz.h"
#include "ppm.h"


bool testKolor_porownanie();
bool testKolor_przypisanie();

int sprawdzObraz(const Obraz& o);
void sprawdzUnikalny(vector<Kolor>&, const Kolor&);


int main()
{
    /*
    testKolor_porownanie()
            ? cout << "Ok!\n"
            : cout << "Nope!\n";

    testKolor_przypisanie()
            ? cout << "przyp Ok\n"
            : cout << "przyp Dupa\n";
    //*/

    Obraz* o = new PPM("plik.ppm");

    o->wczyt("plik_2.ppm");

    int n = sprawdzObraz(*o);

    cout << "unikalne kolory: " << n << endl;


    return 0;
}


int sprawdzObraz(const Obraz &o)
{
    vector<Kolor> unique;
    for (Kolor c : o.zwrocWorekKolorow()) {
        sprawdzUnikalny(unique, c);
    }

    return unique.size();
}


void sprawdzUnikalny(vector<Kolor>& u, const Kolor &c)
{
    for (Kolor k : u) {
        if (c != k) {
            u.push_back(c);
            return;
        }
    }
}


bool testKolor_porownanie()
{
    Kolor a(234, 12, 94);
    Kolor b(a);

    return (a == b);
}


bool testKolor_przypisanie()
{
    Kolor a;
    Kolor b(23, 45, 67);

    a = b;

    return a.m_r == 23
            && a.m_g == 45
            && a.m_b == 67;
}

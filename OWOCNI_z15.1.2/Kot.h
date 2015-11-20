#ifndef Kot_h
#define Kot_h

#include "Zwierz.h"

class Kot : public Zwierz
{
public:
    // konstruktor argumentowy
    Kot(string name) : Zwierz(name) {
        cout << "string kot" << endl;
    }

    // konstruktor argumentowy
    Kot(const char* name) : Zwierz(string(name)) {
        cout << "char kot" << endl;
    }

    // destruktor
    ~Kot() { cout << "umiera kot" << endl; }

    // metoda `mrucząca`
    string purr() { return "Mrrrr"; }

    // przeciążona metoda
    void feed(int m) { cout << "kot je " << m << " kilo karmy" << endl; }
    void feed(Kot& c) { cout << "jem kota o imieniu " << c.getName() << endl; }
};

#endif

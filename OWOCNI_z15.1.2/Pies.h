#ifndef Pies_h
#define Pies_h

#include <vector>

#include "Zwierz.h"

using std::vector;


class Pies : public Zwierz
{
public:
    // usunięcie konstruktora domyślnego - c++11
    Pies() = delete;

    // konstruktor argumentowy
    Pies(string name) : Zwierz(name) {
        cout << "string pies" << endl;
    }

    // destruktor
    virtual ~Pies() { cout << "umiera pies" << endl; }

    // metoda `szczekająca`
    void bark(vector<string>& lo) {
        // instrukcja for po wszystkich elementach kontenera - c++11
        for (auto o : lo) {
            cout << "szczekam na: " << o << endl;
        }
    }

    void feed(int m) {
        cout << "pies zjada " << m << " kilo karmy" << endl;
    }
};

#endif

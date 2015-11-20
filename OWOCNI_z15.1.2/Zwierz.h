#ifndef Zwierz_h
#define Zwierz_h

#include <iostream>

#include "IFeedable.h"

using std::string;
using std::cout;
using std::endl;


class Zwierz : public IFeedable
{
private:
    // prywatna składowa (member variable)
    string m_name;

public:
    // konstruktor bezargumentowy
    Zwierz() {
        cout << "domyslny zwierz" << endl;
        setName("");
    }

    // konstruktor argumentowy
    Zwierz(string name) {
        cout << "string zwierz" << endl;
        setName(name);
    }

    // wirtualny destruktor
    virtual ~Zwierz() {
        cout << "umiera zwierz" << endl;
    }

    // getter - metoda zwracająca wartość składowej
    string getName() { return m_name; }

    // setter - metoda ustawiająca wartość składowej
    void setName(string name) { this->m_name = name; }
};

#endif

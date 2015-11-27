#ifndef OBRAZ_H
#define OBRAZ_H

#include <vector>
#include <string>

#include "kolor.h"

using std::vector;
using std::string;


class Obraz
{
    vector<Kolor> m_worek_kolorow;
    unsigned m_sizeX, m_sizeY;

public:
    Obraz();
    virtual ~Obraz() {}

    virtual void wczyt(const string&) = 0;

    const vector<Kolor>& zwrocWorekKolorow() const
    {
        return m_worek_kolorow;
    }
};

#endif // OBRAZ_H

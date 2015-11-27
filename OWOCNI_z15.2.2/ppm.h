#ifndef PPM_H
#define PPM_H

#include <string>
#include <fstream>

#include "obraz.h"

using std::string;


class PPM : public Obraz
{
    string m_filename;

public:
    PPM(const string& name)
        : m_filename(name)
    {}

    void wczyt(const string& name)
    {
        try {
            std::ifstream f;
            f.open(name);

            //

            f.close();
        } catch (...) {
            //
        }
    }
};

#endif // PPM_H

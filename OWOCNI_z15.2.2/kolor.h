#ifndef KOLOR_H
#define KOLOR_H

#include <iostream>

using std::cout;


class Kolor
{
public:
    unsigned char m_r, m_g, m_b;


    Kolor()
        : m_r(0)
        , m_g(0)
        , m_b(0)
    {}

    Kolor(const Kolor& other)
        : m_r(other.m_r)
        , m_g(other.m_g)
        , m_b(other.m_b)
    {}

    Kolor(unsigned char r,
          unsigned char g,
          unsigned char b)
        : m_r(r)
        , m_g(g)
        , m_b(b)
    {}

    Kolor& operator=(const Kolor& other) {
        m_b = other.m_b;
        m_g = other.m_g;
        m_r = other.m_r;
        return *this;
    }

    bool operator==(const Kolor& other) const {
        return (m_r == other.m_r
                && m_b == other.m_b
                && m_g == other.m_g);
    }

    bool operator!=(const Kolor& other) const {
        return !(*this == other);
    }

    ~Kolor() {
    }

    unsigned char dajCzer() const {
        return m_r;
    }
};

#endif // KOLOR_H

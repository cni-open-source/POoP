#ifndef IFeedable_h
#define IFeedable_h

class IFeedable
{
public:
    // destruktor umożliwiający polimorficzne wywołanie
    // 'w dół' drzewa dziedziczenia
    virtual ~IFeedable() {}
    virtual void feed(int) = 0; // metoda czysto wirtualna
};

#endif

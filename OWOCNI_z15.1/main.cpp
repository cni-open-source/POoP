#include <iostream>
using std::string;
using std::cout;
using std::endl;


class Zwierz
{
private:
    // prywatna składowa (member variable)
    string m_name;

public:
    // konstruktor bezargumentowy
    Zwierz() { setName(""); }

    // konstruktor argumentowy
    Zwierz(string name) { setName(name); }

    // wirtualny destruktor
    virtual ~Zwierz() {
        cout << "umiera zwierz" << endl;
    }

    // getter - metoda zwracająca wartość składowej
    string getName() { return this->m_name; }

    // setter - metoda ustawiająca wartość składowej
    void setName(string name) { this->m_name = name; }
};


class Kot : public Zwierz
{
public:
    // konstruktor argumentowy
    Kot(string name) : Zwierz(name) {}

    // destruktor
    ~Kot() {
        cout << "umiera kot" << endl;
    }

    // metoda
    string purr() { return "Mrrrr"; }
};


int main()
{
    // utworzenie nowego obiektu typu Kot, który jest Zwierzakiem
    // przypisanie: Zwierz = Kot, możliwe z uwagi na hierarchię klas
    // w tym momencie nasz kot staje się zwykłym Zwierzakiem
    Zwierz* z = new Kot("Kicius");
    cout << z->getName() << endl;
    //cout << z->purr() << endl; // Zwierzak nie umie mruczeć :/

    // rzutowanie Zwierzaka na typ Kot
    Kot& c = dynamic_cast< Kot& >( *z );
    cout << c.purr() << endl; // od teraz może znowu mruczeć :)

    delete z; // zwalnianie pamięci

    return 0;
}

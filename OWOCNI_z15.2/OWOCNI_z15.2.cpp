#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;


class Zwierz
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
    string getName() { return this->m_name; }

    // setter - metoda ustawiająca wartość składowej
    void setName(string name) { this->m_name = name; }
};


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
    void feed(int m) { cout << "jem " << m << " kilo karmy" << endl; }
    void feed(Kot& c) { cout << "jem kota o imieniu " << c.getName() << endl; }
};


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
    ~Pies() { cout << "umiera pies" << endl; }

    // metoda `szczekająca`
    void bark(vector<string>& lo) {
        // instrukcja for po wszystkich elementach kontenera - c++11
        for (auto o : lo) {
            cout << "szczekam na: " << o << endl;
        }
    }
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

    c.feed(13); // kot karmiony karmą
    c.feed(c); // kot karmiony kotem

    delete z; // zwalnianie pamięci

    Pies d("Burek"); // nowy zwierzak w programie: pies

    // lista losowych imion (w dopełniaczu)
    vector<string> thieves = {"Antka", "Manka", "Janka"};
    d.bark(thieves); // pies szczeka na wszystkie osoby z listy

    return 0;
}


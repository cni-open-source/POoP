#include <ctime>

#include "Kot.h"
#include "Pies.h"


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

    // klamra ograniczająca czas życia obiektu Pies
    {
    Pies d("Azor"); // nowy zwierzak w programie: pies

    // lista losowych imion (w dopełniaczu)
    vector<string> thieves = {"Antka", "Manka", "Janka"};
    d.bark(thieves); // pies szczeka na wszystkie osoby z listy
    }

    // utworzenie schroniska dla wszystkiego, co można karmić
    vector<IFeedable*> shelter;
    shelter.push_back(new Kot("Puszek")); // do schroniska trafia kot
    shelter.push_back(new Pies("Burek")); // do schroniska trafia pies

    srand(time(NULL));
    // karmienie wszystkich stworzeń w schronisku
    for (auto a : shelter) {
        a->feed( std::rand() % 10 );
    }

    // likwidacja zawartości schroniska
    for (auto a : shelter) {
        delete a;
    }

    return 0;
}


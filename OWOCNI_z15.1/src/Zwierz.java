
public class Zwierz {
    // prywatna składowa (member variable)
    private String m_name;

    // konstruktor bezargumentowy
    public Zwierz() {
        setName("");
    }

    // konstruktor argumentowy
    public Zwierz(String name) {
        setName(name);
    }

    // getter - metoda zwracająca wartość składowej
    public String getName() {
        return this.m_name;
    }

    // setter - metoda ustawiająca wartość składowej
    public void setName(String m_name) {
        this.m_name = m_name;
    }
}

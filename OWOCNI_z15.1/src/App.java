
public class App {
    public static void main(String[] argv) {

        // utworzenie nowego obiektu typu Kot, który jest Zwierzakiem
        // przypisanie: Zwierz = Kot, możliwe z uwagi na hierarchię klas
        // w tym momencie nasz kot staje się zwykłym Zwierzakiem
        Zwierz z = new Kot("Mruczek");
        System.out.println( z.getName() );
        //System.out.println( z.purr() ); // Zwierzak nie umie mruczeć :/

        // rzutowanie Zwierzaka na typ Kot
        Kot k = (Kot) z;
        System.out.println( k.purr() ); // od teraz może znowu mruczeć :)

    }
}

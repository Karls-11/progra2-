package ejemplo;

/**
 *
 * @author umg
 */
public class Ejemplo {

    public static void main(String[] args) {
        System.out.println(Circulo.pi);
        Circulo c1 = new Circulo(32);
        System.out.println(c1.area());
        c1.setX(10);
        c1.setY(2);
        
        
    }
    
}

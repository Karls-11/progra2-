package ejemplo2;

/**
 *
 * @author umg
 */
public class Ejemplo2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        PagoTarjeta pg1 = new PagoTarjeta(200,"12345","12/12/2025");
        System.out.println(pg1.getMonto());
    }
    
}

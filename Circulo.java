package ejemplo;

/**
 *
 * @author umg
 */
public class Circulo extends Figura{
    private double radio;
    public static double pi = 3.1416;
    
    public Circulo(double radio){
        this.radio = radio;
    }
    
    public double getRadio() {
        return radio;
    }

    public void setRadio(double radio) {
        this.radio = radio;
    }
    
    public double area(){
        return pi*(radio*radio);
    }
}

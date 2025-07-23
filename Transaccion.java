/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ejemplo2;

/**
 *
 * @author umg
 */
public class Transaccion {
    private double monto;
    private String fecha;
    
    
    public Transaccion(double monto, String fecha){
        this.monto=monto;
        this.fecha=fecha;
    }
    
    public double getMonto(){
        return monto;
    }
    
    
}

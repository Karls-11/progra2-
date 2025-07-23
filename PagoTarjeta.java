/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ejemplo2;

/**
 *
 * @author umg
 */
public class PagoTarjeta extends Transaccion{
    private String numeroTarjeta;
    
    public PagoTarjeta(double monto, String numeroTarjeta, String fecha){
        super(monto,fecha);
        this.numeroTarjeta = numeroTarjeta; 
    }
    
}

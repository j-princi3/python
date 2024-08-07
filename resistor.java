import java.util.*;
class resistor1{
    HashMap <String,Integer> decoder;
    String b1,b2,b3;

    resistor1(String s1,String s2,String s3){
        b1=s1;
        b2=s2;
        b3=s3;
    }
    void setvalues(){
        decoder=new HashMap<>();
        decoder.put("black", 0);
        decoder.put("brown",1);
        decoder.put("red",2);
        decoder.put("orange",3);
        decoder.put("yellow",4);
        decoder.put("green",5);
        decoder.put("blue",6);
        decoder.put("violet",7);
        decoder.put("grey",8);
        decoder.put("white",9);


    }
    void getValue(){
        setvalues();
        System.out.print( (decoder.get(b1)*10+decoder.get(b2))*Math.pow(10,decoder.get(b3))+" ohms");
    }
}
public class resistor {
    public static void main(String []args){
        resistor1 r=new resistor1("red","black","orange");
        r.getValue();
    }
}

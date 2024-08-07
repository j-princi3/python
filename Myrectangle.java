class Rectangle {
    int bfx;
    int bly;
    int trx;
    int tryy;
    Rectangle(int x1,int y1,int x2,int y2){
        bfx=x1;
        bly=y1;
        trx=x2;
        tryy=y2;
    }
    Rectangle(){

    }
    Rectangle overlap(Rectangle rect){
        int x1=Math.max(rect.bfx,bfx);
        int y1=Math.max(rect.bly,bly);
        int x2=Math.min(rect.trx,trx);
        int y2=Math.min(rect.tryy,tryy);
        Rectangle r;
        if(x1>x2 || y2 >y1){
            r=new Rectangle(0,0,0,0);

        }else{
            r=new Rectangle(x1,y1,x2,y2);
        }


        return r;
    }
    int area(){
        return (trx-bfx)*(tryy-bly);
    }
}
class Square extends Rectangle{
    int x1;
    int y1;
    int l;
    Square(int x1,int y1,int l){
        this.x1=x1;
        this.y1=y1;
        this.l=l;
    }
    int area(){
        return l*l;
    }
    void toString1(){
        System.out.println("[(" + (x1 + l) + "," + (y1 + l) + ");(" + x1 + "," + y1 + ")]");
    }
}
/**
 * myrectangle
 */
public class Myrectangle {
    public static void main(String[] args) {
        Square s=new Square(10,30,5);
        s.toString1();
        System.out.println(s.area());
    }
    
}

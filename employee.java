import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class employee {
    public static void main(String[] args) {
        ArrayList<Employees> e=new ArrayList<>();
        Employees a=new Employees("princi", 5);
        e.add(a);
        e.add(new Employees("tanisj", 15));
        e.add(new Employees("priyal", 1));
        Collections.sort(e,new Sortbyexp());
        for(int i=0;i<e.size();i++){
            System.out.println(e.get(i).name+" "+e.get(i).exp);
        }
    }
}
class Employees{
    String name;
    int exp;
    Employees(String name,int exp){
        this.name=name;
        this.exp=exp;
    }
}

class Sortbyexp implements Comparator<Employees>{
    public int compare(Employees e1,Employees e2){
        return e1.exp-e2.exp;
    }
}

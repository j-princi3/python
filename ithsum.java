import java.util.ArrayList;

public class ithsum {
    ArrayList<Integer> addition(ArrayList<Integer> a ){
        try{int sum=0;
        ArrayList<Integer> arr=new ArrayList<>();
        for(int i=0;i<a.size();i++){
            if(a.get(i)!=null){
            sum += a.get(i);
            arr.add(sum);
            }
            else{
                throw new IllegalArgumentException();
            }
        }
        if(a.size()==0){
            throw new IllegalArgumentException();
        }

        return arr;
    }
        catch(IllegalArgumentException e){
            System.out.print(e);
        }
        return a;
    }
    public static void main(String[] args) {
        ArrayList<Integer> s=new ArrayList<>();
        s.add(1);
        s.add(2);
        s.add(3);
        s.add(4);
        ithsum obj=new ithsum();
        System.out.print(obj.addition(s));
    }
}

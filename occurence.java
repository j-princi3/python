import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;
public class occurence {
    public static void main(String[] args) {
        HashMap <String,Integer> m=new HashMap<>();
        try (Scanner sc = new Scanner(System.in)) {
            String s=sc.nextLine();
            String p[]=s.split(" ");
            for(int i=0;i<p.length;i++){
                int x=m.getOrDefault(p[i], 0)+1;
                m.put(p[i],x);
            }
            TreeMap <String,Integer> t=new TreeMap<>(new Comparator<String>() {
                public int compare(String s1,String s2){
                    if(m.get(s1).compareTo(m.get(s2))==0){
                        return s1.compareTo(s2);
                    }else{
                        return m.get(s1).compareTo(m.get(s2));
                    }
                }
            });
            for(Map.Entry<String,Integer> entry: m.entrySet()){
                t.put(entry.getKey(),entry.getValue());
            }
            for(Map.Entry<String,Integer> entry: m.entrySet()){
                System.out.println(entry.getKey()+" "+entry.getValue());
            }
        }
    }
}
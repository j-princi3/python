import java.io.*;
import java.util.Hashtable;
import java.util.Map;
import java.util.Scanner;

public class hash_file {
    public static void main(String []args) throws FileNotFoundException, IOException{
        Hashtable<String,String> s=new Hashtable<>();
        try (Scanner sc = new Scanner(System.in)) {
            try(BufferedReader r=new BufferedReader(new FileReader("princi.txt"))){
                String line;
                while((line=r.readLine())!=null){
                    String p[]=line.split("\\s+");
                    s.put(p[0],p[1]);
                    System.out.println(p[0]+" "+p[1]);
                }
                String name=sc.next();
                if(s.containsKey(name)){
                    System.out.print(s.get(name));
                }else{
                    System.out.print("Not found");
                }
                String phone=sc.next();
                for(Map.Entry<String,String> e:s.entrySet()){
                    if(e.getValue().equals(phone)){
                        System.out.print(e.getKey());
                        break;
                    }
                }
                r.close();
            }
        }
    }
}

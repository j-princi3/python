import java.io.*;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

class data {
    String s1, s2, s3;

    data(String r1, String r2, String r3) {
        s1 = r1;
        s2 = r2;
        s3 = r3;
    }
}

public class vote {
    public static void main(String[] args) throws FileNotFoundException, IOException {
        ArrayList<data> s = new ArrayList<>();
        try (BufferedReader r = new BufferedReader(new FileReader("logfile.txt"))) {
            String line;
            while ((line = r.readLine()) != null) {
                String p[] = line.split("\\s+");
                data p1 = new data(p[0], p[1], p[2]);
                s.add(p1);
            }
        }
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s.get(i).s1.equals(s.get(j).s1) && s.get(i).s2.equals(s.get(j).s2) && Math.abs(Integer.parseInt(s.get(i).s3)-Integer.parseInt(s.get(j).s3))<=20){
                    s.remove(j);
                }
            }
        }
        HashMap<String, Integer> votess = new HashMap<>();
        for(data d: s){
            int x=votess.getOrDefault(d.s1, 0)+1;
            votess.put(d.s1,x);
        }
        for (Map.Entry<String, Integer> entry : votess.entrySet()) {
            System.out.println("Key: " + entry.getKey() + ", Votes: " + entry.getValue());
        }
    }
}

// import java.io.BufferedReader;
// import java.io.FileReader;
// import java.util.HashMap;
// import java.util.Map;
// public class join {
//     public static class ReadFile implements Runnable {
//         @Override
//         public void run(){
//             try(FileReader fr=new FileReader("salary.csv");
//             BufferedReader br=new BufferedReader(fr)){
//                 String line;
//                 Map<String,Integer> map =new HashMap<>();
//                 while((line=br.readLine())!=null){
//                     System.out.println((line.split(","))[0]);
//                     map.put((line.split(","))[0],Integer.parseInt((line.split(","))[1]));
//                     Collections.sort()
//                 }
//             }
//             catch(Exception e){
//                 e.printStackTrace();
//             }
//         }

//     }
//     public static void main(String args[]){
//         ReadFile rf= new ReadFile();
//         Thread t1=new Thread(rf);
//         t1.start();
//     }
// }

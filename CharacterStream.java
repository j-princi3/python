import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class CharacterStream {
    public static void main(String[] args) {
        try (FileReader fr = new FileReader("input.txt");
             FileWriter fw = new FileWriter("output.txt")) {

            int data;
            while ((data = fr.read()) != -1) {
                fw.write(data);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

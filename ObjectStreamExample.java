import java.io.*;

class Person implements Serializable {
    private static final long serialVersionUID = 1L;
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
}

public class ObjectStreamExample {
    public static void main(String[] args) {
        Person person = new Person("John Doe", 30);

        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("person.dat"));
             ObjectInputStream ois = new ObjectInputStream(new FileInputStream("person.dat"))) {

            oos.writeObject(person);

            Person readPerson = (Person) ois.readObject();
            System.out.println("Name: " + readPerson.name + ", Age: " + readPerson.age);
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}

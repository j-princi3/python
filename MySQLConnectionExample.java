import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class MySQLConnectionExample {
    public static void main(String[] args) {
        // Database URL, username, and password
        String url = "jdbc:mysql://localhost:3306/test"; // Replace 'test' with your database name
        String user = "root"; // Replace 'root' with your MySQL username
        String password = "princi"; // Replace 'princi' with your MySQL password

        // Initialize connection object
        Connection conn = null;

        try {
            // Establish the connection
            conn = DriverManager.getConnection(url, user, password);
            if (conn != null) {
                System.out.println("Connected to the MySQL database!");
            }
        } catch (SQLException e) {
            System.out.println("Connection failed!");
            e.printStackTrace();
        } finally {
            // Close the connection in finally block to ensure it is closed properly
            try {
                if (conn != null) {
                    conn.close();
                }
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }
}

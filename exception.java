import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

class Salary {
    void checkSalary(String salaryStr) throws SalaryException {
        double salary = Double.parseDouble(salaryStr);
        if (salary < 10000) {
            throw new SalaryException("Salary is less than 10k");
        }
    }
}

class DepartmentException extends Exception {
    public DepartmentException(String message) {
        super(message);
    }
}

class AgeException extends Exception {
    public AgeException(String message) {
        super(message);
    }
}

class SalaryException extends Exception {
    public SalaryException(String message) {
        super(message);
    }
}

public class exception {
    public static void main(String[] args) {
        String line;
        try (BufferedReader br = new BufferedReader(new FileReader("employee.csv"))) {
            while ((line = br.readLine()) != null) {
                String[] employee = line.split(",");
                System.out.println(employee[0] + " " + employee[1] + " " + employee[2]);
                checkExceptions(employee);
            }
        } catch (IOException e) {
            System.out.println("Error reading file: " + e.getMessage());
        } catch (DepartmentException | AgeException | SalaryException e) {
            System.out.println("Error processing employee data: " + e.getMessage());
        }
    }

    static void checkExceptions(String[] employee) throws DepartmentException, AgeException, SalaryException {
        String name = employee[0];
        int age = Integer.parseInt(employee[1]);
        // String department = employee[2];
        // double salary = Double.parseDouble(employee[3]);
        
        // if (salary < 10000) {
        //     throw new SalaryException(name + "'s salary is less than 10k.");
        // }

        // if (!department.equalsIgnoreCase("WaterDept") && !department.equalsIgnoreCase("Accounts")) {
        //     throw new DepartmentException(name + " is in an invalid department: " + department);
        // }

        if (age > 65) {
            throw new AgeException(name + " is older than 65.");
        }
    }
}

//inheritance

class Employee {
    private int empId;
    private double salary;
    private String name;
    double getSalary(){
        return salary;
    }
    public void setSalary(double salary){
        this.salary=salary;
        return;
    }
    String getName(){
        return name;
    }
    int getempId(){
        return empId;
    }
    void setName(String name){
        this.name=name;
    }
    void setempId(int empId){
        this.empId=empId;
    }
}
class PermanentEmployee extends Employee{
    private double basicPay;
    private double hra;
    private int experience;
    double getbasicPay(){
        return basicPay;
    }
    void sethra(double hra){
        this.hra=hra;
        return;
    }
    int getExperience(){
        return experience;
    }
    double gethra(){
        return hra;
    }
    void setbasicPay(double basicPay){
        this.basicPay=basicPay;
    }
    void setExperience(int Experience){
        this.experience=Experience;
    }
    void calculateSalary(){
        if (getExperience()<3){
            setSalary(getExperience()+gethra());
        }
        else {
            if(getExperience()>=3 && getExperience()<5){
                setSalary(((5.0 / 100.0 )* getbasicPay())+getbasicPay()+gethra());
            }
            else{
                if(getExperience()>=5 && getExperience()<10){
                    setSalary(getbasicPay()+gethra()+(7.0 / 100.0 * getbasicPay()));
                }
                else{
                    setSalary(getbasicPay()+gethra()+(12.0 / 100.0 * getbasicPay()));
                }
            }
        }
        System.out.println(getSalary());
    }
}
class ContractEmployee extends Employee{
    private double wages;
    private int hours;
    double getwages(){
        return wages;
    }
    public void setSalary(double wages){
        this.wages=wages;
        return;
    }
    int gethours(){
        return hours;
    }
    
    void setempId(int hours){
        this.hours=hours;
    }
    void calculateSalary(){
        setSalary(gethours()*wages);
    }
}

public class EmployeeRecords {
    public static void main(String[] args){
        PermanentEmployee P1= new PermanentEmployee();
        P1.setName("Anil");
        P1.setempId(101);
        P1.setbasicPay(10000);
        P1.sethra(1500);
        P1.setExperience(3);
        P1.calculateSalary();
        System.out.println(P1.getSalary());
    }
}

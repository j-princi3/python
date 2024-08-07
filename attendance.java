// public class Human {
//     String name;
//     int age;
//     String gender;
//     Human(String name,int age,String gender){
//         this.name=name;
//         this.age=age;
//         this.gender=gender;
//     }
// }

// class Student extends Human{
//     boolean isPresent = false;
//     String branch;
//     String year;
//     Student(String name,int age,String gender,String year, String branch){
//         super(name,age,gender);
//         this.year=year;
//         this.branch=branch;
//     }
// }

// class teacher extends Human{
//         String department;
//         String designation;
//         teacher(String name,int age,String gender,String department,String designation){
//             super(name,age,gender);
//             this.department=department;
//             this.designation=designation;
//         }
//         void markattendance(Student s,boolean value){
//             s.isPresent=value;
//         }
//     }
//     public class attendance {
//         public static void main(String[] args){
//             Student s1 = new Student("Rishi",19,"female","2nd","CSE");
//             Student s2 = new Student("Princi",19,"female","2nd","CSE");
//             teacher t=new teacher("Meenal", 40, "female", "CSE", "Professor");
//             t.markattendance(s1, true);
//             t.markattendance(s2, true);
           
            
//         }
    
//     }

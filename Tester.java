// public class ExceptionTest {
//     public static void main(String[] args) {
//         try {
//             methodA();
//         } catch (Exception e) {
//             System.out.println(e);
//             System.out.println("Main catch");
//         }
//     }

//     public static void methodA() {
//         try {
//             methodB();
//         } catch (Exception e) {
//             System.out.println("MethodA catch");
//             throw e;
//         }
//     }

//     public static void methodB() {
//         throw new RuntimeException("Exception in methodB");
//     }
// }
// MethodA catch
// java.lang.RuntimeException: Exception in methodB
// Main catch
// =================================================================================
// public class ExceptionTest {
//     public static void main(String[] args) {
//     try {
//     try {
//     int result = 10 / 0;
//     System.out.print(result);
//     } catch (ArithmeticException e) {
//     System.out.println("Inner catch: Division by zero");
//     throw e;
//     }
//     } catch (ArithmeticException e) {
//     System.out.println("Outer catch: Division by zero");
//     }
//     }
//     }
// Inner catch: Division by zero
// Outer catch: Division by zero
// ========================================================================

// public class ExceptionTest {
//     public static void calculateA() throws Exception {
//     calculateB();
//     calculateC();
//     calculateD();
//     }
//     private void calculateB(){
//     // code to calculate B
//     }
//     private void calculateC(){
//     // code to calculate C
//     }
//     private void calculateD(){
//     // code to calculate D
//     }
//     public static void main( String[] args) {
//     try {
//     CalculateUtil.calculateA();
//     }
//     catch(Exception e){
//     // Line x
//     }
//     }
//     }
//     ExceptionTest.java:49: error: non-static method calculateB() cannot be referenced from a static context
//     calculateB();
//     ^
// ExceptionTest.java:50: error: non-static method calculateC() cannot be referenced from a static context
//     calculateC();
//     ^
// ExceptionTest.java:51: error: non-static method calculateD() cannot be referenced from a static context
//     calculateD();
//     ^
// ExceptionTest.java:64: error: cannot find symbol
//     CalculateUtil.calculateA();
//     ^
//   symbol:   variable CalculateUtil
//   location: class ExceptionTest
// 4 errors

//======================================================================

// public class Tester {
//     public static void main(String[] args) {
//     try{
//     System.out.println(Double.valueOf("420.00"));
//     }catch(Exception e){
//     System.out.println("Some exception occurred");
//     }
//     catch(NumberFormatException ex){
//     System.out.println("NumberFormatException occurred");
//     }
//     }
//     }
// javac Tester.java
// Tester.java:96: error: exception NumberFormatException has already been caught
//     catch(NumberFormatException ex){
//     ^
// 1 error

// ===============================================================================


// #include <iostream>
// using namespace std;

// class BankAccount {
//     private :
//     string acNo;
//     int Balance;
//     BankAccount(){
//         cout<<"A/c. No.";
//         cin>>acNo;
//         cout<<"Balance: ";
//         cin>>Balance;
//     }
//     public:
//     void deposit(){
//         int amt;
//         cout<<"Deposit Amount: ";
//         cin>>amt;
//         Balance+=amt;
//         cout<<"Deposit successful. Current balance: "<<Balance;
//     }
//     void withdrawal(){
//         int amt;
//         cout<<"Wihdrawal Amount: ";
//         cin>>amt;
//         if (Balance>=amt){
//             Balance-=amt;
//             cout<<"Withdrawal successful. Current balance: "<<Balance;
//         }
//         else{
//             cout<<"Insufficient balance. Cannot withdraw. ";
//         }
//     }
// };

// int main(){
//     BankAccount k;
//     k.deposit();
//     k.withdrawal();
//     k.withdrawal();
//     return 0;
// }
// #include <iostream>
// #include <cmath>
// using namespace std;

// class Circle{
//     private:
//     const double radius;
//     const double pi;
//     public:
//     Circle(){
//         cout<<"Input the radius of the circle: ";
//         cin>>radius;
//         pi = M_PI;
//     }
//     void parameter(){
//         double area=pi *pow(radius,2);
//         double circum=2*pi*radius;
//         cout<<"Area: "<<area<<endl;
//         cout<<"Circumference: "<<circum<<endl;
//     }
// };
// int main(){
//     Circle c;
//     c.parameter();
//     return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    const double radius;
    const double pi; // Removed initialization here

public:
    Circle() : radius(0), pi(M_PI) { // Initialize radius in the member initializer list
        cout << "Input the radius of the circle: ";
        cin >> radius;
    }

    void parameter() {
        double area = pi * pow(radius, 2);
        double circum = 2 * pi * radius;
        cout << "Area: " << area << endl;
        cout << "Circumference: " << circum << endl;
    }
};

int main() {
    Circle c;
    c.parameter();
    return 0;
}

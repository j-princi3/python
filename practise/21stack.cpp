// 4.Stacks
// i)Write a program that implement stack (its operations) using
// Arrays	ii)linked lists
// iii)Infix to Postfix Conversion
// iv)Check for balanced parentheses in an expression
// v)String Palindrome
// ------------------------------------------------------------------------------------------


// #include <iostream>
// using namespace std;

// class stack{
//     public:
//     int *arr;
//     int top;
//     int size;
//     stack(int n){
//         arr=new int[n];
//         size=n;
//         top=-1;
//     }
//     void push(int data){
        
//         if (top==size-1){
//             cout<<"Stack overflows";
//         }
//         else{
//             top++;
//             arr[top]=data;
//         }
//         return ;
//     }
//     void pop(){
//         if (top==-1){
//             cout<<"No element present";
//         }
//         else{
//             top--;
//         }
//     }
//     void print(){
//         for (int i=0;i<=top;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
//     bool Top(){
//         if (top==-1){
//             return 0;
//         }
//         else{
//             return 1;
//         }
//     }
// };

// int main(){
//     stack st(3);
//     st.push(9);
//     cout<<st.Top();

//     st.push(10);
//     st.push(11);
//     st.pop();
//     st.pop();
//    cout<< st.Top();

//     st.pop();
//     st.pop();
//     cout<< st.Top();
//     st.print();
//     return 0;
// }

// -----------------------------------------------------------------------------------------

// #include <iostream>
// #include <stack>
// #include <cmath>
// using namespace std;

// int main(){

//     // stack <int> arr;
//     // arr.push(0);
//     // arr.push(9);
//     // while(!arr.empty()){
//     //     cout<<arr.top();
//     //     arr.pop();
//     // }

//     //evaluation of prefix
//     stack<int> answer;
//     string s;
//     cin>>s;
//     int op2=0,op1=0;
//     for(int i=s.length()-1;i>=0;i--){
//         if('0'<=s[i] && s[i]<='9'){
//             answer.push(s[i]-'0');
//         }
//         else{
//             op1=answer.top();
//             // cout<<op1<<endl;
//             answer.pop();
//             op2=answer.top();
//             // cout<<op2<<endl;
//             answer.pop();
//         }
       

//         switch(s[i]){
//             case '+':
//                 answer.push(op1+op2);
//                 // cout<<answer.top()<<endl;
//                 break;
//             case '-':
//                 answer.push(op1-op2);
//                 break;
//             case '/':
//                 answer.push(op1/op2);
//                 break;
//             case '^':
//                 answer.push(pow(op1,op2));
//                 break;
//             case '*':
//                 answer.push(op1*op2);
//                 break;
//                 // cout<<answer.top()<<endl;
//         }
//     }
//     cout<<answer.top();
//     return 0;
// }
// -------------------------------------------------------------------------------
#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main(){

    //evaluation of postfix
    stack<int> answer;
    string s="46+2/5*7+";
    // cin>>s;
    int op2=0,op1=0;
    for(int i=0;i<=s.length()-1;i++){
        if('0'<=s[i] && s[i]<='9'){
            answer.push(s[i]-'0');
            // cout<<answer.top();
        }
        else{
            op2=answer.top();
            answer.pop();
            op1=answer.top();
            answer.pop();
        }
       

        switch(s[i]){
            case '+':
                answer.push(op1+op2);
                // cout<<answer.top()<<endl;
                break;
            case '-':
                answer.push(op1-op2);
                break;
            case '/':
                answer.push(op1/op2);
                break;
            case '^':
                answer.push(pow(op1,op2));
                break;
            case '*':
                answer.push(op1*op2);
                // cout<<answer.top()<<endl;
                break;
                
        }
    }
    cout<<answer.top();
    return 0;
}
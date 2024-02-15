#include <iostream>
using namespace std;

// int main()
// {
//     std::string strValue = "workspacek";

//     int indexPos = 3;

//     // Remove character from string at given index position
//     strValue.erase(indexPos,1);

//     std::cout<<strValue << std::endl;


//     return 0;
// }
class Solution {
public:
    bool isValid(string s) {
        if (s.size()%2==1){
            return false;
        }
        else{
        for (int i =0;i<s.size();i++){
            if (s[i]=='('){
                int flag=0;
                for (int j=i+1;j<s.size();j++){
                    if (s[j]==')'){
                        flag=1;
                        s.erase(j, 1);
                        s.erase(i, 1);
                        cout<<s<<endl;
                        break;
                    }
                cout<<s;
                if (flag!=1){
                    return false;
                } 
                
                }
            }
            if (s[i]=='{'){
                int flag1=0;
                for (int j=i+1;j<s.size();j++){
                    if (s[j]=='}'){
                        flag1=1;
                        s.erase(j, 1);
                        s.erase(i, 1);
                        cout<<s<<endl;
                        break;
                    }
                
                }
                cout<<s;
                if (flag1!=1){
                    return false;
                } 
            }
            if (s[i]=='['){
                int flag2=0;
                for (int j=i+1;j<s.size();j++){
                    if (s[j]==']'){
                        flag2=1;
                        s.erase(j, 1);
                        s.erase(i, 1);
                        cout<<s<<endl;
                        break;
                    }
                }
                cout<<s;
                if (flag2!=1){
                    return false;
                } 
            }
        }
        
        return true;
    }
    }
};
int main(){
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.isValid(s);
    return 0;
}
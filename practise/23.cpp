#include<iostream>
using namespace std;

int findMinimumOperations(string s1, string s2, string s3) {
        if (s1.length()<=s2.length() && s1.length()<=s3.length()){
            int flag=0;
        for (int i =0 ;i<s1.length();i++){
            if (s1[i]!=s2[i] || s1[i]!=s3[i]){
                break;
            }
            else{
                flag++;
            }
        }
        if (flag==0){
            return -1;
        }
        else{
            int ll=(s2.length()-flag)+(s3.length()-flag)+(s1.length()-flag);
            return ll;
        }
    }
        else {
            if(s2.length()<=s1.length() && s2.length()<=s3.length()){
               int flag=0;
           for (int i =0 ;i<s2.length();i++){
            if (s2[i]!=s1[i] || s2[i]!=s3[i]){
                break;
            }
            else{
                flag++;
            }
        }
        if (flag==0){
            return -1;
        }
        else{
            int ll=(s1.length()-flag)+(s3.length()-flag)+(s2.length()-flag);
            return ll;
        }
    }
            else{
                int flag=0;
        for (int i =0 ;i<s3.length();i++){
            if (s3[i]!=s1[i] || s3[i]!=s2[i]){
                break;
            }
            else{
                flag++;
            }
        }
        if (flag==0){
            return -1;
        }
        else{
            int ll=(s1.length()-flag)+(s2.length()-flag)+(s3.length()-flag);
            cout<<ll;
            return ll;
        }
    }
            }
        
        return 0;
    }
int main(){
    cout<<findMinimumOperations("dogv","dofjkhx","dog");
}
#include <iostream>
using namespace std;

class poly
{
public:
    int *a;
    int size=1;
    poly()
    {
        a = new int[size];
        for (int i = 0; i < size; i++)
        {
            a[i] = 0;
        }
    }
    void create(int index, int coeff)
    {
        if (index >= size - 1)
        {
            int *b = new int[index + 1];
            b = a;
            b[index] = coeff;
            cout << "coeff ";
            for (int i = size - 1; i < index; i++)
            {
                b[i] = 0;
            }
            for (int i = 0; i <= index; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
            cout << "index ";
            for (int i = 0; i <= index; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            size=index+1;
            a=b;
        }
        else
        {
            a[index] = coeff;
            cout << "hicoeff ";
            for (int i = 0; i < size; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            cout << "hiindex ";
            for (int i = 0; i < size; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};
void sum(int *p,int *q,int s1,int s2){
        for(int i=0;i<s1;i++){}
    }

int main()
{
    poly p;
    string s="5+2x^1+3x^2";
    for(int i=0;i<s.length();i++){
        if( s[i]!='+' && s[i]!='^'){
            // cout<<s[i];
            // p.create(0,int(s[i])-48);
            // }
            if(s[i]=='x' && s[i+1]=='^'){
                p.create(int(s[i+2])-48,int(s[i-1])-48);
            }
            else{
                if(s[i+1]!='x' && s[i-1]!='^'){
                 p.create(0,int(s[i])-48);
                }
            }
        }
    }
    // poly q;
    // q.create(1, 5);
    // q.create(10, 2);
    // q.create(5, 6);
    // q.create(12, 4);

}
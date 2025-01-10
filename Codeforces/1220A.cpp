#include <iostream>
using namespace std;
int main(){
    int test,z=0,e=0,r=0,o=0,n=0;
    string palavra;
    cin >> test;
    cin >> palavra;
    for(int i=0;i<test;i++){
        if(palavra[i]=='z')z++;
        else if(palavra[i]=='e')e++;
        else if(palavra[i]=='r')r++;
        else if(palavra[i]=='o')o++;
        else if(palavra[i]=='n')n++;
    }
    for(int i=0;i<n;i++){
        cout <<"1 ";
        o--;
        e--;
    }
    for(int i=0;i<z;i++){
        cout <<"0 ";
        e--;
        r--;
        o--;
    }
    cout << endl;
}
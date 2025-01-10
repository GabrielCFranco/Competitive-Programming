#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string magic, aux;
        cin >> magic;
        aux = magic;
        reverse(aux.begin(),aux.end());
        if(magic == aux) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}
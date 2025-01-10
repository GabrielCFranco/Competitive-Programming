#include <bits/stdc++.h>
using namespace std;
int main(){
    string palavra1,palavra2,letrasgeral;
    cin >> palavra1 >> palavra2 >> letrasgeral;
    palavra1 = palavra1 + palavra2;
    sort(palavra1.begin(),palavra1.end());
    sort(letrasgeral.begin(),letrasgeral.end());
    if(palavra1.compare(letrasgeral) != 0){
        cout << "NO\n";
    }
    else cout << "YES\n";
}
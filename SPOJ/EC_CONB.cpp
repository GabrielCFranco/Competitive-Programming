#include <bits/stdc++.h>
using namespace std;
int stringTointeger(string str)
{
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}
int main(){
    int teste;
    cin >> teste;
    for(int i=0;i<teste;i++){
        string num,bin;
        int aux,total=0;
        cin >> num;
        aux = stringTointeger(num);
        if (aux%2 == 1) cout << aux << endl;
        else{
            while(aux>0){
                bin+=to_string(aux%2);
                aux /= 2;
            }
            reverse(bin.begin(),bin.end());
            int j=0;
            while(j<bin.length()){
                if(bin[j]=='1') total += pow(2,j);
                j++;
            }
            cout << total <<endl;
        } 
    }
}
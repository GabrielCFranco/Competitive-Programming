#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        int array;
        cin >> array;
        int j=0;
        for(j=0;j<array-1;j++){
            cout << j+1 <<" ";
        }
        cout << j+1 << endl;
    }
}   
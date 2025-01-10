#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int vecsize;
        cin >> vecsize;
        vector<int>ordem;
        int aux;
        for(int j=0;j<vecsize;j++){
            cin >> aux;
            ordem.push_back(aux);
        }
        sort(ordem.begin(),ordem.end());
        int tamVec = ordem.size();
        int ver=0;
        for(int j=0;j<vecsize-1;j++){
            if(abs(ordem[j]-ordem[j+1])>1){
                ver++;
            }
        }
        if(ver>=1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
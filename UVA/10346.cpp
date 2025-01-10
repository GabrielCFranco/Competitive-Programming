#include <iostream>
using namespace std;
int main(){
    int n,k;
    while((scanf("%d %d",&n,&k))!=EOF){
        int temp=n;
        while(temp >= k){
               n += temp/k;
               temp = temp%k+temp/k; 
        }
        cout << n << endl;
    }
    return 0;
}
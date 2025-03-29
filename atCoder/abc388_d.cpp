#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        v.PB(aux);
    }
    int cont=0;
    for(int i=0;i<n;i++)
    {
        if(cont>0)
        {
            if(cont>=i)
            {
                v[i]+=i;
                cont-=i;
            }
            else
            {
                v[i]+=cont;
                cont=0;
            }
        }
        if((n-i)-1<=v[i])
        {
            v[i]-=(n-i)-1;
            cont+=(n-i)-1;
        }
        else
        {
            cont+=v[i];
            v[i]=0;
        }
        cout << v[i] << " ";
    }
    cout << "\n";
}
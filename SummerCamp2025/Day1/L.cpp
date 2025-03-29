    #include <bits/stdc++.h>
    using namespace std;
    #define PB push_back
    #define ll long long
    #define MAX_V 200005
    int main()
    {
        int n;
        cin >> n;
        vector<ll> v;
        vector<ll> vaux;
        for(int i=0;i<n;i++)
        {
            ll aux;
            cin >> aux;
            v.PB(aux);
            if(aux==0)vaux.PB(i);
        }
        if(vaux.size()==1)
        {
            for(int i=0;i<n;i++)
            {
                cout << abs(i-vaux[0]) << " ";
            }
            cout << "\n"; return 0;
        }
        int cont=0;
        for(int i=0;i<n;i++)
        {
            if(i<=vaux[cont]&&cont==0)
            {
                cout << vaux[cont] - i << " "; 
            }
            else if(i<=vaux[cont])
            {
                if(vaux[cont]-i>i-vaux[cont-1]) cout << i - vaux[cont-1] << " ";
                else cout << vaux[cont] - i << " ";
            }
            else
            {
                cout << i - vaux[cont-1] << " ";
            }
            if(vaux[cont]==i) cont++;
        }
        cout << "\n";
    }
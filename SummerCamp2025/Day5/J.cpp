#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
int first,last;
int main()
{
    string s;
    cin >> s;
    bool f=false;
    for(int i=0;i<s.length();i++)
    {
        if(!f&&s[i]=='1'){first=i;f=true;}
        else if(f&&s[i]=='1')last=i;
    }
    bool o=false,z=false;
    int cont0=0,cont1=0, ans=0;
    for(int i=first;i<=last;i++)
    {
        if(s[i]=='0')
        {
            cont0++;
            z=true;
        }
        else
        {
            cont1++;
            o=true;
            if(z&&o)
            {
                z=false;o=false;
                if(cont1>=cont0) ans+=cont0;
                else ans+=cont1;
                cont0=0;cont1=0;
            }
        }
    }
    cout << ans << "\n";
}
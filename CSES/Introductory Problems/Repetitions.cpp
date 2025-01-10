#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
int main()
{
    string s;
    cin >> s;

    char c;
    c=s[0];
    int sol=1, cont=1;
    for(int i=1;i<s.length();i++)
    {
        if(c!=s[i])
        {
            c=s[i];
            cont=1;
        }
        else cont++;
        if(cont>sol)sol=cont;
    }
    cout << sol << "\n";
}
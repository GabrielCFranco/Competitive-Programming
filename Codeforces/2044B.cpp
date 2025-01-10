#include <bits/stdc++.h>
using namespace std;
#define PB push_back
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin >> s;
        reverse(s.begin(),s.end());
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='p') s[j]='q';
            else if(s[j]=='q')s[j]='p';
        }
        cout << s << "\n";
    }
}
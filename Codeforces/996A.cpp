    #include <bits/stdc++.h>
    using namespace std;
    #define PB push_back
    #define ll long long
    const int INF = 0x3f3f3f3f;
    void solve()
    {
        vector<int> v = {100,20,10,5,1};
        int n;
        cin >> n;
        int i=0,ans=0;
        while(n>0)
        {
            if(v[i]<=n) 
            {
                n-=v[i];
                ans++;
            }
            else i++;
        }
        cout << ans << "\n";
    }
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t=1;
        while(t--) solve();
    }
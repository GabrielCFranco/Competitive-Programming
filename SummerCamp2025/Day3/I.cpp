#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
ll n;
vector<pair<ll,ll>> ts(100100);
bool f(int x){
    bool ok = true;
    ll T = 1;
    ll P = x;
    for(int i = 0; i < n; ++i){
        if(ts[i].first == -1) continue;
        if(ts[i].second <= P){
            P -= ts[i].second;
            if(T > ts[i].first){
                ok = false;
            }
        }else{
            ll falta = ts[i].second - P;
            ll aux = ceil(1.0*falta/x);
            P += aux*x;
            T += aux;
            P -= ts[i].second;
            if(T > ts[i].first){
                ok = false;
            }
        }
    }
    return ok;
}

int ans = 0;
void bb(int l, int r)
{
    if(l > r) return;
    int m = (l+r)/2;
    if(f(m)){
        ans = m;
        bb(l, m-1);
    }else{
        bb(m+1, r);
    }
}
void solve()
{
    cin >> n;
    //vector<pair<ll,ll>> ts(n+1);
    for(int i=0; i<100100; ++i) ts[i] = {1e18, 1e18};
    for(int i=0;i<n;i++){cin >> ts[i].second;}
    for(int i=0;i<n;i++){cin >> ts[i].first;}
    int tot=0;
    sort(ts.begin(),ts.end());
    bb(1, 1e9);
    cout<<ans<<"\n";
}
int main()
{
    solve();
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ifstream f("in");
mt19937 rng((int) chrono::steady_clock::now().time_since_epoch().count());
ll uniform(ll l, ll r){
    uniform_int_distribution<ll> uid(l, r);
    return uid(rng);
}

template<ll MOD> struct str_hash{
    static ll P;
    vector<ll> h, p;
    str_hash(string s) : h(s.size()), p(s.size()){
        p[0] = 1, h[0] = s[0];
        for(ll i = 1; i < s.size(); ++i)
            p[i] = p[i-1]*P%MOD, h[i] = (h[i-1]*P + s[i])%MOD;
    }
    ll operator()(ll l, ll r){
        ll hash = h[r] - (l ? h[l - 1]*p[r-l+1]%MOD : 0);
        return hash < 0 ? hash + MOD : hash;
    }
};
template<ll MOD> ll str_hash<MOD>::P = uniform(256, MOD - 1);

const ll mod = 1e9+7;
const char chars[] = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
void solve(){
    string s;
    getline(f,s);
    map<char, bool> mp;
    for(auto c: chars) mp[c] = true;

    string tmp = "";
    int ans = -1;
    for(int i = 0; i < s.size(); ++i){
        if(mp[s[i]] == true){
            tmp += s[i];
            ans = max(ans, 1);
        }else{
            if(tmp.size() != 0){
            //cout << "s: " << tmp << "\n";
            string rtmp = tmp;
            reverse(rtmp.begin(), rtmp.end());
            //cout << "rs: " << rtmp << "\n";
            str_hash<mod> hs(tmp);
            str_hash<mod> rhs(rtmp);

            int sz = tmp.size();
            
            for(int k = 2; k <= tmp.size(); ++k){
                for(int j = 0; j <= tmp.size() - k; ++j){
                    // abcdefg
                    // gfedcba
                    // eh palindromo do j ate o j + k
                    // IOI
                    // j, j = k - 1
                    //cout << tmp << " " << rtmp << "\n";
                    //cout << "j: " << j << " k: " << k << "\n";
                    //cout << "s  l: " << j << " r: " << j + k - 1 << "\n";
                    //cout << "rs l: " << sz - k - j << " r: " << sz - j - 1 << "\n";
                    if(hs(j, j + k - 1) == rhs(sz - k - j, sz - j - 1)){
                        //cout << "OI " << k << "\n";
                        ans = max(ans, k);
                    }
                }
            }
        }
            tmp = "";
        }
    }

    if(tmp.size() > 0){
        //cout << "s: " << tmp << "\n";
        string rtmp = tmp;
        reverse(rtmp.begin(), rtmp.end());
        //cout << "rs: " << rtmp << "\n";
        str_hash<mod> hs(tmp);
        str_hash<mod> rhs(rtmp);

        int sz = tmp.size();
        for(int k = 2; k <= tmp.size(); ++k){
            for(int j = 0; j <= tmp.size() - k; ++j){
                // abcdefg
                // gfedcba
                // eh palindromo do j ate o j + k
                // IOI
                // j, j = k - 1
                //cout << tmp << " " << rtmp << "\n";
                //cout << "j: " << j << " k: " << k << "\n";
                //cout << "s  l: " << j << " r: " << j + k - 1 << "\n";
                //cout << "rs l: " << sz - k - j << " r: " << sz - j - 1 << "\n";
                if(hs(j, j + k - 1) == rhs(sz - k - j, sz - j - 1)){
                    //cout << "OI " << k << "\n";
                    ans = max(ans, k);
                }
            }
        }
    }
    cout << ans << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int t = 1;
    string first;
    getline(f,first);
    t = stoi(first);
    while(t--)solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
template<typename T = int> struct frac {
	T num, den;
	template<class U, class V>
	frac(U num_ = 0, V den_ = 1) : num(num_), den(den_) {
		assert(den != 0);
		if (den < 0) num *= -1, den *= -1;
		T g = gcd(abs(num), den);
		num /= g, den /= g;
	}

	friend bool operator<(const frac& l, const frac& r) {
		return l.num * r.den < r.num * l.den;
	}
	friend frac operator+(const frac& l, const frac& r) {
		return {l.num*r.den + l.den*r.num, l.den*r.den};
	}
	friend frac operator-(const frac& l, const frac& r) {
		return {l.num*r.den - l.den*r.num, l.den*r.den};
	}
	friend frac operator*(const frac& l, const frac& r) {
		return {l.num*r.num, l.den*r.den};
	}
	friend frac operator/(const frac& l, const frac& r) {
		return {l.num*r.den, l.den*r.num};
	}
	friend ostream& operator<<(ostream& out, frac f) {
		out << f.num << '/' << f.den;
		return out;
	}
};
void solve()
{
    vector<vector<frac<int>>> vx;
    vector<vector<frac<int>>> vy;
    vector<vector<frac<int>>> subx;
    vector<vector<frac<int>>> suby;
    int n, x, y, d;
    cin >> n >> x >> y >> d;
    x--;y--;
    frac ans = frac(0,1);
    vector<frac<int>> spc(n,frac(0,1));
    vx.push_back(spc);vy.push_back(spc);
    vx[0][x]=frac(1,1);vy[0][y]=frac(1,1);
    for(int i=1;i<=d;i++)
    {
        vx.push_back(spc);vy.push_back(spc);
        for(int j=0;j<n;j++)
        {
            if(vx[i-1][j].num!=0)
            {
                if(j-1<0) vx[i][j] = vx[i-1][j]*frac(1,2);
                else vx[i][j-1] = vx[i-1][j]*frac(1,2);
                if(j+1==n)vx[i][j] = vx[i-1][j]*frac(1,2);
                else vx[i][j+1] = vx[i-1][j]*frac(1,2);
            }
            if(vy[i-1][j].num!=0)
            {
                if(j<0) vy[i][j] = vy[i-1][j]*frac(1,2);
                else vy[i][j-1] = vy[i-1][j]*frac(1,2);
                if(j==n)vy[i][j] = vy[i-1][j]*frac(1,2);
                else vy[i][j+1] = vy[i-1][j]*frac(1,2);
            }
        }
        for(int j=0;j<n;j++)
        {
            if(vx[i][j].num!=0&&vy[i][j].num!=0)
            {
                ans=ans+(vx[i][j]*vy[i][j]);
            }
        }
    }
    cout << ans << "\n";
}
int main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
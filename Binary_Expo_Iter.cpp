#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define ull     unsigned long long

#define umap    unordered_map
#define uset    unordered_set
#define pb      push_back
#define pf      push_front
#define m_p     make_pair
#define ff      first
#define ss      second
#define in      insert
#define ub      upper_bound
#define lb      lower_bound

#define all(v)       v.begin(), v.end()
#define asc(v)       sort(v.begin(), v.end())
#define rev(v)       sort(v.rbegin(), v.rend())
#define ign          cin.ignore()
#define getln(s)     getline(cin, s)

#define eps          (double)(1e-7)
#define pi           (double)(acos(-1))
#define gcd(a, b)    __gcd(a, b)
#define lcm(a, b)    (a * b) / __gcd(a, b)
#define mod          (ll)(1e18+7)

#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))

#define case     cout<<"Case "<<k<<": "
#define yes      cout<<"YES\n";
#define no       cout<<"NO\n";
#define endl     "\n"
int k;

/*= = = = = = = = = = = = = = = = = = = = = = = = = = = = 

                    Code Start From Here                    

= = = = = = = = = = = = = = = = = = = = = = = = = = = = */

ll binaryMultiply(ll a, ll b)
{
    ll res = 0;
    while(b)
    {
        if(b&1) res = (res + a) % mod;
        a = (a + a) % mod;
        b >>= 1;
    }
    return res;
}

int binaryExpoIter(int a, int b)
{
    int res = 1;
    while(b)
    {
        if(b&1) res = binaryMultiply(res , a);
        a = binaryMultiply(a , a);
        b >>= 1;
    }
    return res;
}

void solve()
{
    int a, b;
    cin>>a>>b;
    cout<<fixed<<setprecision(10)<<binaryExpoIter(a,b)<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
    // cin>>test;
    for(k=1; k<=test; k++)
    {
        solve();
    }
    return 0;
} 

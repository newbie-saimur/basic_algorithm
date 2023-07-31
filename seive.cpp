#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define ull     unsigned long long

#define umap    unordered_map
#define uset    unordered_set
#define pb      push_back
#define pop     pop_back()
#define pf      push_front
#define ff      first
#define ss      second
#define in      insert
#define ub      upper_bound
#define lb      lower_bound

#define all(v)       v.begin(), v.end()
#define asc(v)       sort(v.begin(), v.end())
#define rev(v)       sort(v.rbegin(), v.rend())

#define eps          (double)(1e-7)
#define pi           (double)(acos(-1))
#define gcd(a, b)    __gcd(a, b)
#define lcm(a, b)    (a * b) / __gcd(a, b)
#define mod          (ll)(1e9+7)

#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))

#define case     cout<<"Case "<<k<<": "
#define yes      cout<<"YES\n"
#define no       cout<<"NO\n"
#define endl     "\n"
int k;

/*= = = = = = = = = = = = = = = = = = = = = = = = = = = = 

                    Code Start From Here                    

= = = = = = = = = = = = = = = = = = = = = = = = = = = = */

const int N = 1e7 + 10;
vector<bool> isPrime(N,1);
vector<int> lowestPrime(N), highestPrime(N);

void seive()
{
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i<N; i++)
    {
        if(isPrime[i])
        {
            lowestPrime[i] = highestPrime[i] = i;
            for(int j = 2 * i; j<N; j+=i)
            {
                isPrime[j] = false;
                highestPrime[j] = i;
                if(lowestPrime[j]==0)
                    lowestPrime[j] = i;
            }
        }
    }
}

void solve()
{
    for(int i=2; i<=100; i++)
    {
        cout<<lowestPrime[i]<<" "<<highestPrime[i]<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    seive();
    ll test=1;
    //cin>>test;
    for(k=1; k<=test; k++)
    {
        solve();
    }
    return 0;
} 

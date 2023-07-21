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
#define mod          (ll)(1e9+7)

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

const int N = 1e5 + 10;
int a[N];

void merge(int l, int r, int mid)
{
    int l_sz = mid - l + 1;
    int L[l_sz + 1];
    int r_sz = r - mid;
    int R[r_sz + 1];
    for(int i=0; i<l_sz; i++)
          L[i] = a[i+l];    
    for(int i=0; i<r_sz; i++)
          R[i] = a[i+mid+1];

    L[l_sz] = R[r_sz] = INT_MAX;

    int l_i = 0;
    int r_i = 0;

    for(int i=l; i<=r; i++)
    {
        if(L[l_i]<=R[r_i])
        {
            a[i] = L[l_i];
            l_i++;
        }
        else
        {
            a[i] = R[r_i];
            r_i++;
        }
    }
}

void mergeSort(int l, int r)
{
    if(l==r) return;
    int mid = (l+r)/2;
    mergeSort(l, mid);
    mergeSort(mid+1, r);
    merge(l,r,mid);
}

void solve()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];

    mergeSort(0,n-1);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
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

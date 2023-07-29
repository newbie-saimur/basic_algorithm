// Euler Theorem for large Binary Exponentiation
// When B is a super large number


// (a^b) % m = (a^(b%φ(m))) % m;
// where φ(m) = m * (1 - (1/p1)) * (1 - (1/p2)) * ....
//    here, p1, p2 are distinct prime factors

// if m is prime number this theorem can be written as : 
//    (a^b) % m = (a^(b%(m-1))) % m;

#include <bits/stdc++.h>
using namespace std;

int binaryExpoIter(int a, int b, int m)
{
    int res = 1;
    while(b)
    {
        if(b&1) res = (res * 1LL * a) % m;
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return res;
}


int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    // lets say calculate 50 ^ 64 ^ 32 % mod
    // Here mod is prime number
    cout<<fixed<<setprecision(10)<<binaryExpoIter(a,binaryExpoIter(b,c,mod-1),mod)<<endl;

    // If m is not prime then we need to calculate the value of φ(m) by the following formula
    // φ(m) = m * (1 - (1/p1)) * (1 - (1/p2)) * ....
    

    return 0;
}

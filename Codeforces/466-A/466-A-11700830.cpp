#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 3010
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fint(a,n) for(int i=a;i<=n;i++)
#define fjnt(a,n) for(int j=a;j<=n;j++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair;
#define pb push_back;

int main()
{
    int n,m,a,b;
    sd(n);
    sd(m);
    sd(a);
    sd(b);
    if(n<m)
        pd(min(n*a,b));
    else
    {
        float x = (float)b/m;
        if(x>=a)
            pd(n*a);
        else
            pd((n/m)*b + min((n%m)*a,b));
    }
}
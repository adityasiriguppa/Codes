#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100003
#define MOD 1000000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)
#define sllf(a) scanf("%llf",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pllf(a) printf("%llf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

int main()
{
    int n;
    int c,i,temp;
    int a[105];
    sd(n);
    sd(c);
    fin(i,0,n-2)
        sd(a[i]);
    sort(a,a+n-1);
    int res = 0;
    while(c < a[n-2])
    {
        res++;
        c++;
        a[n-2]--;
        sort(a,a+n-1);
    }
    if(c == a[n-2])
        res++;
    pd(res);
    return 0;
}
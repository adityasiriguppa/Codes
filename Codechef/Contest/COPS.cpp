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
    int t;
    sd(t);
    while(t--)
    {
        int flag[101],i;
        for(i=1;i<=100;i++)
            flag[i]=1;
        int x,y,m,p;
        sd(m);
        sd(x);
        sd(y);
        int a = x*y;
        int ans = 0;
        while(m--)
        {
            sd(p);
            flag[p]=0;
            for(i=p+1;i<=a+p && i<101;i++)
                flag[i]=0;
            for(i=p-1;i>=p-a && i>0;i--)
                flag[i]=0;
        }
        for(i=1;i<=100;i++)
            {
                ans += flag[i];
            }
        pd(ans);
        pn;
    }
    return 0;
}

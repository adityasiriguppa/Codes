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
    int t,i;
    sd(t);
    char a[MAX];
    int c[26];
    while(t--)
    {
        memset(c,0,sizeof(c));
        scanf(" %s",a);
        int res = 0;
        for(i=0;a[i]!='\0';i++)
        {
            c[a[i]-'a']++;
        }
        fin(i,0,25)
        {
            if(c[i])
                res++;
        }
        if(res&1)
            printf("Counter Terrorist\n");
        else
            printf("Terrorist\n");
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 505
#define MOD 10

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
	int n,k,t,i,j,m;
	sd(t);
	while(t--)
	{
		sd(n);
		sd(k);
		int dp[n+1][k+1];
		for(i=0;i<=n;i++)
			for(j=0;j<=k;j++)
			{
				if(i==0)
					dp[i][j]=0;
				else if(j==0)
					dp[i][j]=1;
				else
				{
					dp[i][j]=0;
					for(m=0;m<i && j-m>=0;m++)
						dp[i][j] += dp[i-1][j-m];
				}
			}
		pd(dp[n][k]);
		pn;
	}
	return 0;
}
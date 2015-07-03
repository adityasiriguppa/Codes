#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 2006
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n-1;i>=a;i--)

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
	int n,W,i,j;
	int t;
	sd(t);
	while(t--)
	{
		sd(W);
		sd(n);
		int w[n],v[n];
		for(i=0;i<n;i++) {sd(w[i]); sd(v[i]);}

		int dp[n+1][W+1];
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=W;j++)
			{
				if(i==0||j==0)
					dp[i][j] = 0;
				else if(w[i-1]<=j)
				{
					dp[i][j] = max(v[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
				}
				else
					dp[i][j] = dp[i-1][j];
			}
		}
		printf("Hey stupid robber, you can get %d.\n",dp[n][W]);
	}
	return 0;
}
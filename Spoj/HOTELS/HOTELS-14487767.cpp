#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define l long

#define MAX 100006
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
	ll n,m;
	slld(n);
	slld(m);
	ll a[n];
	ll res = 0;
	ll sum = 0;
	fin(0,n-1)
		slld(a[i]);
	ll i = 0;
	ll j = 0;
	while(i<n && j<n)
	{
		while(sum<=m)
		{
			res = max(res,sum);
			sum += a[j++];
		}
		if(res == m)
		{
			plld(m);
			return 0;
		}
		while(sum>m)
		{
			sum -= a[i++];
		}
		if(sum==m)
		{
			plld(m);
			return 0;
		}
		res = max(res,sum);
	}
	plld(res);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 3010
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

vector<int> adjList[1001];
bool visited[1001];

int bfs(int i)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;
    int res = 1;
    while(!q.empty())
    {
        int k = q.front();
        q.pop();
        int j;
        for(j=0;j<adjList[k].size();j++)
        {
            if(!visited[adjList[k][j]])
            {
                visited[adjList[k][j]] = true;
                q.push(adjList[k][j]);
                res++;
            }
        }
    }
    return res;
}

int main()
{
	int t;
	sd(t);
	while(t--)
    {

        memset(visited,false,sizeof(visited));
        int n,f,s;
        int a,b;
        sd(n);
        sd(s);
        sd(f);
        fint(1,n)
            adjList[i].clear();
        while(f--)
        {
            sd(a);
            sd(b);
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }
        int lol = bfs(s);
        int res = 0;
        fint(1,n)
        {
            if(!visited[i])
            {
                res = max(res,bfs(i));
            }
        }
        pd(res);
        pn;
    }
}

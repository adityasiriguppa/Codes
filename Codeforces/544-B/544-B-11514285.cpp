#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string.h>
#include <map>
#include <math.h>
#include <cmath>

using namespace std;

/*long long pow_mod(ll x, ll y, ll z)
{
    ll number = 1;
    while (y)
    {
        if (y & 1)
            number = number * x % z;
        y >>= 1;
        x = (ll)x * x % z;
    }
    return number;
}*/

/*long long gcd(long long a,long long b)
{
    while(b)
        b ^= a ^= b ^= a %= b;
    return a;
}*/

/*long long _merge(long *a,long low,long mid,long high)
{
    long long inv_count = 0;
    long i = low , j = mid , k = 0;
    long c[200001];
    while (i <= mid-1 && j <= high)
    {
        if(a[i] <= a[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = a[j++];
            inv_count += mid - i;
        }
    }
    while(i <= mid-1)
        c[k++] = a[i++];
    while(j <= high)
        c[k++] = a[j++];
    for(i = 0 ; i < k ; i++)
        a[i+low] = c[i];
    return inv_count;
}

long long merge_sort(long *a,long low,long high)
{
    long long inv_count = 0;
    long mid;
    if(low<high)
    {
        mid = (low+high)/2;
        inv_count = merge_sort(a,low,mid);
        inv_count += merge_sort(a,mid+1,high);
        inv_count += _merge(a,low,mid+1,high);
    }
    return inv_count;
}*/

/*int is_palindrome(char s[],int i,int j)
{
    while(i<=j)
        if(s[i++]!=s[j--])
            return 0;
    return 1;
}*/

/*int is_prime(long long n)
{
    if(n%2 == 0)
        return 0;
    for(long long i=3;i<=sqrt(n);i+=2)
        if(n%i == 0)
            return 0;
    return 1;
}*/

//#define MAX 5000
//#define MOD 1000000000

/*long long triangle[MAX + 1][MAX + 1];

void makeTriangle() {
    long long i, j;


    triangle[0][0] = 1;

    for(i = 1; i <= MAX; i++) {
        triangle[i][0] = 1;
        for(j = 1; j <= i; j++) {
            triangle[i][j] = (triangle[i - 1][j - 1] + triangle[i - 1][j])%MOD;
        }
    }
}*/

/*double area(pair<long long,long long> p[],int n)
{
    double area = 0;
    int j;
    for(j=0;j<n-1;j++)
        area += p[j].first * p[j+1].second - p[j].second * p[j+1].first;
    area+= p[n-1].first * p[0].second - p[n-1].second * p[0].first;
    area/=2.0;
    return abs(area);
}*/

int main()
{
    int n,k,i,j,check;
    scanf("%d %d",&n,&k);
    check = n*n;
    if(check%2)
        check++;
    if(k > check/2)
        printf("NO");
    else
    {
        printf("YES\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if((i+j)%2==0 && k)
                    {
                        printf("L");
                        k--;
                    }
                else
                    printf("S");
            }
            printf("\n");
        }
    }
    return 0;
}
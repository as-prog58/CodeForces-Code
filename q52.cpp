#include<iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() 
{ 

    ll n, m; 
    cin >> n >> m; 
    ll a[n]; 
    for (ll i = 0; i < n; i++) 
        cin >> a[i]; 
    ll l = 0, r = INT_MAX, ans = -1, cnt; 
    while (l <= r) 
    { 
        ll mid = (l + r) / 2; 
        cnt = 0; 
        for (ll i = 0; i < n; i++) 
        { 
            if (mid > a[i]) 
            { 
                cnt += (mid - a[i]); 
            } 
        } 
        if (cnt <= m) 
        { 
            ans = mid; 
            l = mid + 1; 
        } 
        else 
        { 
            r = mid - 1; 
        } 
    } 
    cout << ans << endl; 
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	solve();
}

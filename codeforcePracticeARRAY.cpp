#include<iostream>
#include<bits/stdc++.h>
#define ll  long long
using namespace std;

void solve()
{
	int n;
	cin>>n;
	map<int,int>m;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		m[x]=i;
	}
	int sum=-1;
	map<int,int> ::iterator it;
	map<int,int> ::iterator itt;
	
	for(it=m.begin();it!=m.end();it++)
	{
		for(itt=m.begin();itt!=m.end();itt++)
		{
			if(__gcd(it->first,itt->first)==1)
			sum=max(sum,it->second+itt->second);
		}
	}
	cout<<sum<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	solve();
	
	return 0;
}

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		string x,s;
		cin>>n>>m;
		cin>>x>>s;
		
		int c=0;
		while(x.find(s)==string::npos)
		{
			x=x+x;
			c++;
			if(c==m)
			break;
		}
		
		if(c!=s.size())cout<<c<<endl;
		else cout<<"-1"<<endl;
		
	}
}

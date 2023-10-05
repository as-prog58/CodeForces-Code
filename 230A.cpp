#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int s,n;
	cin>>s>>n;
	int r=0;
	vector< pair <int,int> > p;
	
	for(int i=0;i<n;i++)
	{
		int temp1,temp2;
		cin>>temp1>>temp2;
		p.push_back(make_pair(temp1,temp2));
	}
	
	sort(p.begin(),p.end());
	
	for(int i=0;i<n;i++)
	{
		if(s>p[i].first)
		s=s+p[i].second;
		else
		{
			cout<<"NO";
			r=1;
			break;
		}
	}
	if(r==0)
	cout<<"YES";
}

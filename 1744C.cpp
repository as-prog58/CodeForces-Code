#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
     	long long int n;
     	char c;
     	cin>>n;
     	cin>>c;
     	string s;
     	cin>>s;
     	long long int maxi=0;
     	if(n==1||c=='g')
		 {
     		cout<<"0"<<endl;
     		continue;
		 }
		 vector<int>v;
		 for(int i=0;i<n;i++)
		 if(s[i]==c)v.push_back(i);
     	for(int i=0;i<v.size();i++)
     	{
     		long long int cnt=0;
     	
     			int j=v[i]+1;
     			if(j==n)j=0;
     			for(;j<n;j++)
     			{
     			    cnt++;
					 if(s[j]=='g')
					 break;
     				
     				if(j==n-1)
     				j=-1;
				 }
				 
				 maxi=max(maxi,cnt);
		 }
		 
		 
		 cout<<maxi<<endl;
	 }

	return 0;

}

#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		
		string a="",b="";
		char min=s[s.length()-1];
		int in=s.length()-1;
		int i,j;
		for( i=s.length()-1;i>=0;i--)
		{
			if(s[i]<=min) 
			{
				min=s[i];
				in=i;
			}
		}
		a=a+min;
		for(j=in;j<s.length()-1;j++)
		{
			s[j]=s[j+1];
		}
		s[j]='\0';
		b=s;
		
		cout<<a<<" "<<b<<endl;
	}
}

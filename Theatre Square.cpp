#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int m,n,a;
	long long int l,k;
	cin>>l>>k>>a;
	m=max(l,k);
	n=min(l,k);
        
	
	long long int c=0;
	while(n>0)
	{
	
	if(m%a==0)
	c=c+m/a;
	else
	c=c+m/a+1;
	n=n-a;
	
    }
    
    cout<<c;
	
}



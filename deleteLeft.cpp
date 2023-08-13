#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,t;
	cin>>s>>t;
	int lens=s.size();
	int lent=t.size();
	int c=0,i;
	int r=0;
	int com=lens<lent?lens:lent;
              for(i=1;i<=com;i++)
              {
              	if(s[lens-i]!=t[lent-i])
                  break;
			  }
	
	c=lens+lent-2*(i-1);
	cout<<c<<endl;
	

	
}

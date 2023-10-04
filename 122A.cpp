#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int flag=0,r=0;
	int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	for(int i=0;i<14;i++)
	{
		if(n%arr[i]==0)
		{
		
				cout<<"YES";
				flag=1;
				break;
			
		}
	}
	if(flag==0)
	cout<<"NO";

}

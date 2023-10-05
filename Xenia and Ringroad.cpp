#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int arr[m];
	
	for(int i=0;i<m;i++)
	{
		cin>>arr[i];
	}
	long long int c=arr[0]-1;
	int count =0;
	
	for(int i=0;i<m-1;i++)
	{
		if(arr[i+1]>arr[i])
		{
			c=c+arr[i+1]-arr[i];
		}
		else if(arr[i+1]<arr[i])
		{
			c=c+(n-arr[i]+arr[i+1]);
		}
		else
		{
			
		}
	}
	
	cout<<c;
}

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int arr[n],i;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    sort(arr,arr+n);
    long long int sum1=0,sum2=0;
    for(i=0;i<n/2;i++)
    {
    	sum1=sum1+arr[i];
    	sum2=sum2+arr[n-i-1];
	}
	if(n%2==1)
	sum2=sum2+arr[n/2];
	cout<<sum1*sum1+sum2*sum2;
  
	
}

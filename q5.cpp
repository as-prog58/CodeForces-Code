#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
	cin>>t;
  while(t--)
  {
  	int n,x;
  	cin>>n>>x;
  	int arr[n];
  	for(int i=0;i<n;i++)
  	cin>>arr[i];
  	
  	int left=1,right=x+*max_element(arr,arr+n);
  	int mid;
  	int ans=-1;
  	while(left<=right)
  	{
  		 mid=(left+right)/2;
  	
  		int sum=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<mid)
		sum=sum+(mid-arr[i]);
	}
  	
  	 if(sum<=x)
  		{
  			
			  left=mid;
  			ans=mid;
		  }
  		else
  		right=mid-1;
	  }
	  
	  cout<<ans<<endl;
  }
  return 0;
    
	

	
}

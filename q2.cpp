#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
	cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int arr[n];
      int c=0;
      for(int i=0;i<n;i++)
      {
      	cin>>arr[i];
      	if(arr[i]==0)
      	c++;
	  }
	  if(c>1)
	  {
	  	cout<<"0"<<endl;
	  	
	  }
	  else if(c==1)
	  {
	  	int prod=1;
	  	for(int i=0;i<n;i++)
	  	{
	  		if(arr[i]!=0)
	  		prod=prod*arr[i];
	  		
		  }
		  cout<<prod<<endl;
		 
	  }
      else
      {
	  
      int maxprod=INT_MIN;
      for(int i=0;i<n;i++)
      {
      	int prod=arr[i]+1;
      	for(int j=0;j<n;j++)
      	{
      	  
			if(i!=j)
			{
				prod=prod*arr[j];
			}
		  }
		  if(prod>maxprod)
		  maxprod=prod;
	  }
	  
	  cout<<maxprod<<endl;
}
  }
  return 0;
    
	

	
}

#include <iostream>
#include <bits/stdc++.h>
// #include "utilities.cpp"
using namespace std;




const int mod = 1e9 + 7;
// const int mod = 998244353;





signed main()
{

    
    int t = 1;
    cin >> t;
    while (t--) 
	{
	    int n;
        cin>>n;
      int arr[n];
      int r=0;
      for(int i=0;i<n;i++)cin>>arr[i];
      sort(arr,arr+n);
      for(int i=0;i<n-1;i++)
      {
      	if((arr[i+1]-arr[i])>1)
      	
		  {
		  	 cout<<"No"<<endl;
		  	r=1;
		  	break;
		  }
      	
	  }
	  if(r==0)
       		cout<<"Yes"<<endl;
	
    
	}
	return 0;
	
}
    

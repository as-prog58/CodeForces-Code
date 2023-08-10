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
      int sum=0;
      int i=0;
      while(sum<n)
      {
      	sum=sum+(2*i+1);
      	i++;
	  }
	  sum=sum-(2*(i-1)+1);
	  int diff=n-sum;
	  if(diff<=i)
	  {
	  	cout<<diff<<" "<<i<<endl;
	  }
	  else
	  {
	  	cout<<i<<" "<<2*i-diff<<endl;
	  }
	  
	  
	
    
	}
	return 0;
	
}
    

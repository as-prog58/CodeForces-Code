#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
      int n,k;
      cin>>n>>k;
      
      if(k>=n)
      cout<<(k+n-1)/n<<endl;
     
	  else
	  {
	  	cout<<1+(n%k>0)<<endl;
	  }
	 }

	return 0;

}

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
       int cnt=0;
       int i;
       for( i=0;1;i++)
       {
       	if(i%3==0||i%10==3)
       	{
       		
		   }
       	
       	else
       	cnt++;
       	
       	if(cnt==n)
       	break;
	   }
        cout<<i<<endl;
    
	}
	return 0;
	
}
    


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
	    int s[4];
	    cin>>s[0]>>s[1]>>s[2]>>s[3];
	    int max1=s[0]>s[1]?s[0]:s[1];
	    int max2=s[2]>s[3]?s[2]:s[3];
	    //int sum=s[0]+s[1]+s[2]+s[3];
	    sort(s,s+4);
	    if(s[2]+s[3]==max1+max2)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    
	    
    
	}
	return 0;
	
}
    


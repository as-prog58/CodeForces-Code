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
	    long long int n;
	    cin>>n;
	    int r=0;
	    if(n%2==1)
	    {
	    	cout<<"Yes"<<endl;
	    		r=1;
		}
		else
		
	    for(long long int i=n/2;i>2;)
	    {
	    	if(n%i==0&&i%2==1)
	    	{
	    		cout<<"Yes"<<endl;
	    		r=1;
	    		break;
			}
			else
			{
				i=i/2;
			}
		}
	    
    if(r==0)
    cout<<"No"<<endl;
	  
	  
	
    
	}
	return 0;
	
}
    

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
	 long long  int a,b,c;
	  cin>>a>>b>>c;
	  long long int m=0;
	   if((2*b-c)%a==0 && (2*b-c)>0)
	   {
            m=(2*b-c)/a;
        }
        else if((a+c)%(2*b)==0)
		{

            m=(a+c)/(2*b);
            
        }
        else if((2*b-a)%c==0 && (2*b-a)>0)
		{

            m=(2*b-a)/c;

        }
        
       
		if(m>0)
		{

            cout<<"YES\n";

        }
        else
        cout<<"NO"<<endl;
	}
	return 0;
	
}
    

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
	   int x;
	   cin>>x;
	   if(x>45)
	   cout<<"-1\n";
	   else if(x<10)
	     cout<<x<<endl;
	     
	     else
	     {
	     	  int n = x;
            vector<int> v;
            int bigEl = 9;
            int sum = 0;
            while (n!=sum)
			{
                if ((n-sum)>bigEl)
				{
                    sum+=bigEl;
                    v.push_back(bigEl);
                    bigEl--;
                } 
				else
				{
                    v.push_back(n-sum);
                    sum=n;
                }
            }
            for (int j = v.size()-1; j >=0 ; j--) 
			{
                cout<<v[j]<<"";
            }
            cout<<"\n";
		 }
	     
	   
	   
	    
    
	}
	return 0;
	
}
    

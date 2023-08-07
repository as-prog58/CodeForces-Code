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

        int c1=n/3;
        int c2=c1;
        if(n%3==1)c1++;
        if(n%3==2)c2++;

        cout<<c1<<" "<<c2<<endl;
	}
	return 0;
	
}
    


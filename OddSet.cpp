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
        int arr[2*n];
        int even=0,odd=0;
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2)odd++;
            else
            even++;
        }

        if(odd==even)cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
	}
	return 0;
	
}
    


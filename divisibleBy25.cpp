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
		 if(n%25==0)
		 {
		 	cout<<"0"<<endl;
		 }
		 else
		 {
		 
		 vector<int>digits;
		 while(n>0)
		 {
		 	digits.push_back(n%10);
		 	n=n/10;
		 } 
		 int len=digits.size(); 
		 reverse(digits.begin(),digits.end());
		 int c=0;
		 i=len-1;
		 if(digits[0]==0||digits[0]==5)
		 {
		 	if()
		 }
		 
	    }
    }
	return 0;
	
}
    

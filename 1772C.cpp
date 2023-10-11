

                             //AShish

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
      int k,n;
      cin>>k>>n;
      vector<int>ans;
       int rem_ele=n;
       int c=0;
       int i=1;
       int not_filled=k;
       while(rem_ele>not_filled)
       {
       	c=(i*i-i+2)/2;
       	i++;
       	ans.push_back(c);
       	not_filled--;
       	rem_ele=n-c;
       	
	   }
	   int filled=k-not_filled;
	   while(filled<=k)
	   {
	   	c++;
	   	ans.push_back(c);
	   	filled++;
	   
	   	
	   }
	   
	   for(i=0;i<k;i++)
	   cout<<ans[i]<<" ";
	   
	   cout<<endl;
	 }

	return 0;

}

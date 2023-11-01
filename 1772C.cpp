

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
       int c=1;
       int i=1;
       int not_filled=k;
       while(i<=k)
       {
        c=(i*i-i+2)/2;
       	ans.push_back(c);
       	i++;
	   }
	    if(ans[k-1]>n)
	    {
	    	for(i=k-1;i>=0;i--)
	    	{
	    		if(ans[i]>n)
	    		{
	    			ans[i]=n;
	    			n--;
				}
				else break;
			}
		}
	   
	   for(i=0;i<k;i++)
	   cout<<ans[i]<<" ";
	   
	   cout<<endl;
	 }

	return 0;

}

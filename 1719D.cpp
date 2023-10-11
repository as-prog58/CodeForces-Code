#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
      int n;
      cin>>n;
      string s;
      cin>>s;
       vector<int>prefix;
       vector<int>suffix;
       set<char>si;
       for(int i=0;i<n;i++)
       {
       	   si.insert(s[i]);
       	   prefix.push_back(si.size());
	   }
	   si.clear();
	   for(int i=n-1;i>=0;i--)
       {
       	   si.insert(s[i]);
       	  suffix.push_back(si.size());
	   }
	   reverse(suffix.begin(),suffix.end());
	   int max=2;
	   for(int i=0;i<n-1;i++)
	   {
	   	int temp=prefix[i]+suffix[i+1];
	   	if(temp>max)max=temp;
	   }
	   
	   cout<<max<<endl;
	 }

	return 0;

}

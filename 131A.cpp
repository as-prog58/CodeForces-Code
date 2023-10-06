#include<bits/stdc++.h>

using namespace std;
int main()
{
   string s;
   cin>>s;
   int len=s.size();
   int r=1;
   for(int i=1;i<len;i++)
   {
   	  if(s[i]>='a'&&s[i]<='z')
   	  r=0;
   }
   
   if(r==1)
   { 
   for(int i=0;i<len;i++)
   {
   	
   		if(s[i]>='a'&&s[i]<='z')
   		s[i]=s[i]-32;
	
	
		else
		s[i]=s[i]+32;
	
   }
   }
  
        cout<<s;
    return 0;
}

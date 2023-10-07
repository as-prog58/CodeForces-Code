#include<bits/stdc++.h>

using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n,k;
   	cin>>n>>k;
   	string s;
   	cin>>s;
 
       long long int cnt=0;
       long long int  c=0, ans;
    for(int i=0;i<k;i++) 
	{
        if (s[i] == 'W')cnt++;
    }
    ans = cnt;
    for(int i=k;i<n;i++) 
	{
        if (s[i] == 'W')
		cnt++;
        if (s[i - k] == 'W')
		cnt--;
        ans = min(ans, cnt);
    }
    
    cout<<ans<<endl;
   }
   
    return 0;
}

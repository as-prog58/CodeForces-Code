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
        char c;
        string s;
        cin >> n >> c >> s;
 
        int p = 0;
        int greenPos[n];
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
            {
                greenPos[p] = i;
                p++;
            }
        }
        int countGreen = p;
 
        int ans = 0;
 
        p = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != c)
                continue;
 
            while (p < countGreen && greenPos[p] < i)
                p++;
 
            if (p != countGreen)
            {
                ans = max(ans, greenPos[p] - i);
            }
            else
            {
                ans = max(ans, greenPos[0] + n - i);
            }
        }
 
        cout << ans << endl;
	 }

	return 0;

}

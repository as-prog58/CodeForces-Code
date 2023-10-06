#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long  x;
    cin>>x;
    int c=0;
    while(x/2!=0)
    {
        if(x%2==1)
            c++;
          x=x/2;
    }

    cout<<c+1;

    return 0;
}

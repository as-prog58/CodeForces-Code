#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int m=max(3*a/(float)10,a-a/(float)250*c);
    int v=max(3*b/(float)10,b-b/(float)250*d);
    if(m>v)
    cout<<"Misha";
    else if(v>m)cout<<"Vasya";
    else
    cout<<"Tie";
    
	

	
}

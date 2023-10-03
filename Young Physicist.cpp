#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n][3];
   int a=0,b=0,c=0;
     for(int i=0;i<n;i++)
     {
     	for(int j=0;j<3;j++)
     	{
     		int temp;
			 cin>>arr[i][j];
			 temp=arr[i][j];
     		if(j==0)
     		a=a+temp;
     		if(j==1)
     		b=b+temp;
     		if(j==2)
     		c=c+temp;
		 }
	 }
	 
	 if(a==0&&b==0&&c==0)
	 cout<<"YES";
	 else
	 cout<<"NO";
}



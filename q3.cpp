#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
	cin>>t;
     while(t--)
    {
       char a[10][10];
      int i,j,sum=0;
      for(i=0;i<10;i++)
      {
      	for(j=0;j<10;j++)
      	{
      		cin>>a[i][j];
      		if(a[i][j]=='X')
      		{
			  if(i==0||j==0||i==9||j==9)
			   sum=sum+1;
			  else if(i==1||j==1||i==8||j==8)
			  sum=sum+2;
			   else if(i==2||j==2||i==7||j==7)
			  sum=sum+3;
			   else if(i==3||j==3||i==6||j==6)
			  sum=sum+4;
			   else if(i==4||j==4||i==5||j==5)
			  sum=sum+5;
          	}
		}
	  }
	  
	  cout<<sum<<endl;
    }
  return 0;
    
	

	
}

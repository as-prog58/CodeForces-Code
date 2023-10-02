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
    	multimap<int,int>mapp;
    	for(int i=0;i<n;i++)
    	{
    		int temp;
    		cin>>temp;
    		mapp.insert(pair<int,int>(temp,i));

		}
		
		int arr[n]={0};
		int j=n;
		multimap<int, int>::iterator it;
		 for ( it= mapp.begin(); it!= mapp.end(); it++) 
		 {
            arr[it->second]=j;
            j--;
        }
        
        for(int m=0;m<n;m++)
        cout<<arr[m]<<" ";
        
        cout<<endl;
	}
    
	

	
}

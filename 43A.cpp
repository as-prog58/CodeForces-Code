#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string team1,team2;
	string temp;
	cin>>temp;
	team1=temp;
	if(n==1)
	{
		cout<<temp;
		exit(0);
	}
	int team1won=1;
	int team2won=0;
	
	for(int i=0;i<n-1;i++)
	{
		 
		cin>>temp;
		if(temp==team1)
		{
			team1won++;
		}
		else
		{
			team2=temp;
			team2won++;
		}
	}
	if(team1won>team2won)
	cout<<team1;
	else
	cout<<team2;
}

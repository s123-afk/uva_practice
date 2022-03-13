#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; 
	vector<string>v;
	cin>>n;
	cin.ignore();
	for(int i = 1 ; i <= n ; i++)
	{
		string s;
		getline(cin,s);	
		v.push_back(s);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			if(v[i][j]==' ')
			{
				v[i].erase(j);
				break;
			}
		}	
	}
	sort(v.begin(),v.end());
	int i,j;
	for(i=0;i<n;)
	{
		cout<<v[i]<<" ";
		int count = 1;
		
		for(j=i+1;j<n;j++)
		{
			if(v[j] != v[i])
			{
				break;
			}
			else
			{
				count++;
			}
		}
		i=j;
		cout<<count<<'\n';
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		vector<int> v;
		int temp=1;
		while(cin>>temp){
			v.push_back(temp);
			if(getchar() == '\n'){
					break;
			}
		}
		sort(v.begin(),v.end());
		int spot = (v.size())&1 ? v.size()/2 : v.size()/2-1;
		int ret = 0;
		for(int j=0;j<v.size();j++){
			ret += abs(v[j]-v[spot]);
		}
		printf("%d\n",ret);
		
	}
	
	
} 

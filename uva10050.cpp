#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string trash;
	int T;
	cin>>T;
	while(T--){
		int N,P;
		cin>>N>>P;
		getline(cin,trash);
		
		set<int> myset;
		int hartal_params[101]={};
		
		for(int i=1;i<=P;i++){
			cin>>hartal_params[i];
		}
		 
		for(int i=1;i<=P;i++){
			for(int j=hartal_params[i];j<=N;j+=hartal_params[i]){
				myset.insert(j);				
			}
		}
		set<int>::iterator it=myset.begin();
		
		while(it!=myset.end()){
			if((*it%7==6)||(*it%7==0)){
				
				it=myset.erase(it);
				
			}
			else{
				it++;
			}
		}
		
		cout<<myset.size()<<"\n";
		
		myset.clear();
		
		
		
	}
	


	
} 

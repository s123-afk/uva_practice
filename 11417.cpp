#include<bits/stdc++.h>

using namespace std;

int GCD(int big,int small){
	if(small==0){
		return big;
	}
	else{
		GCD(small,big%small);
	}
}

int main(){
	int N;
//	map<string,int> mymap;
//	map<string,int> ::iterator iter;
//	
//	mymap["dog"]=123;
//	mymap["cat"]=456;
//	
//	for(iter=mymap.begin(); iter!=mymap.end(); iter++){
//		cout<<iter->first<<" "<<iter->second<<"\n";
//	}
//	
//	iter=mymap.find("dog");
//	if(iter==mymap.end()){
//		cout<<"nofind\n";
//	}
//	else{
//		cout<<iter->second;
//	}
	string temp_str;
	while(cin>>N){
		if(N==0){
			break;
		}
		getline(cin,temp_str);
//		cout<<N<<"\n";
		
		int G=0;
		for(int i=1;i<N;i++){
			for(int j=i+1;j<=N;j++){
				G+=GCD(j,i);
			}
		}
		cout<<G<<"\n";
		
	}
	return 0;
}



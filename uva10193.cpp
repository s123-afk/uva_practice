#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin>>N;
	
	for(int pair_num=1;pair_num<=N;pair_num++){
		bitset<31> bs[2];
		for(int i=0;i<2;i++){
			cin>>bs[i];
		}
		unsigned int usi[2];
		for(int i=0;i<2;i++){
			usi[i]=(unsigned int)bs[i].to_ulong();
		}
		
		if(__gcd(usi[0],usi[1])==1){
			cout<<"Pair #"<<pair_num<<": Love is not all you need!\n";
		}
		else{
			cout<<"Pair #"<<pair_num<<": All you need is love!\n";
		}
		
	}
	
	
}
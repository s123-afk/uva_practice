#include<bits/stdc++.h>

using namespace std;

int main(){
		
	int fabon[38]={1,2};
	for(int i=2;i<38;i++){
	fabon[i]=fabon[i-1]+fabon[i-2];
	}

	int N;
	cin>>N;
	
	int dec_num;
	
	while(N--){
		cin>>dec_num;
		cout<<dec_num<<" = ";
		
		bool can_output_zero=false;
		for(int i=37;i>=0;i--){
			if(dec_num>=fabon[i]){
				dec_num-=fabon[i];
				cout<<"1";
				can_output_zero=true;
				
			}
			else if(can_output_zero==true){
				cout<<"0";
				
			}
		}
		cout<<" (fib)\n";
		
			
		

		
		
	}
	
	
	
	
}




#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
int main(){
	int time;
	cin>>time;
	int test_i=1;
	cin.ignore(10000,'\n');
	while(time--){
		int N;
		scanf("N = %d",&N);
	
		vector<long long int> vec[N];
//		cout<<N<<"\n";
		long long int owo;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				
				cin>>owo;
				vec[i].push_back(owo);
//				cout<<owo<<"\n";
			}	
		}
		int whether_sym=1;
		for(int i=0;i<=N/2;i++){
			for(int j=0;j<N;j++){
				if(vec[i].at(j)!=vec[N-i-1].at(N-j-1)){
					whether_sym=0;
					
//					cout<<"owo1:"<<vec[i].at(j)<<"\n"<<"owo2:"<<vec[N-1-i].at(N-1-j)<<"\n";
					break;
				}
				if(vec[i].at(j)<0){
					whether_sym=0;
//					cout<<"owo1:"<<vec[i].at(j)<<"\n"<<"owo2:"<<vec[N-1-i].at(N-1-j)<<"\n";
					break;
				}
				 
			}
			if(whether_sym==0){
				break;
			}
		}
		if(whether_sym==0){
			printf("Test #%d: Non-symmetric.\n",test_i);
		}		
		else{
			printf("Test #%d: Symmetric.\n",test_i);
		}
		test_i++;
		
		cin.ignore(10000,'\n');

	}
	
	return 0;
	
	
} 

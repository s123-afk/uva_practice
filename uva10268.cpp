#include<iostream>
#include<vector>
#include<math.h>
#include<fstream>

using namespace std;
int main(){
	long long n;
//    ofstream out("ex.txt");	
	while(cin>>n){	
		vector<long long> vec;
		long long owo;
		while(cin>>owo){
			vec.push_back(owo);
			char d=cin.get();
			
			if(d=='\n'){break;
			}
				
			
		}
		long long sum=0;
		
		long vec_size=vec.size()-1;
		long long mul=1;
		for(long long i=1;i<=vec_size;i++){
			sum+=mul*i*vec[vec_size-i];
			mul*=n;
		}
		cout<<sum<<"\n";
//		out<<sum<<"\n";
		
	}
	
	return 0;
	
}

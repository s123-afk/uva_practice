#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string strs[101];
	int index=0;
	int max=0;
	while(getline(cin, strs[index])){
		if(max<strs[index].length()){
			max=strs[index].length();
		}
		index++;
	}
	for(int i=0;i<max;i++){
		for(int j=index-1;j>=0;j--){
			if(strs[j].length()<=i){
				cout<<' ';
			}
			else{
				cout<<strs[j][i];
			}	
			
		}
		cout<<'\n';
	}
	return 0;	
}	


#include <iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

int main(){
	vector< string > vec;
	int n=0;
	int count[200]={0};
	scanf("%d",&n);
	getchar();
	
	char str[999]={};
	for(int i=0;i<n;i++){
		cin.getline(str,999);
		vec.push_back(str);	
	}
	
	


	int maxlen=0;
	for(int i=0;i<n;i++){
		for(int j=vec[i].size()-1;j>=0;j--){
		
		
			if( vec[i][j]>='a' && vec[i][j]<='z' ){
				count[ vec[i][j]-'a'+'A' ]++;
			}
			else{
				count[ vec[i][j] ]++;
			}
			
		}
		if(vec[i].size()>maxlen){
			maxlen=vec[i].size();
		}
		
	}
	for(int i = maxlen*3; i >= 1; i--){
		for(int j='A';j<='Z';j++){
			if(count[j]==i){
				printf("%c %d\n",j,i);
			}
		}
	}
	return 0;
	
	
	
	
	
	
}



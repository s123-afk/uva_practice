#include<string>
#include<iostream>
#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<fstream>
using namespace std;

int main(){
	string a;
	string b;
	int cnt_a[128];
	int cnt_b[128];
	memset(cnt_a,0,sizeof(cnt_a));
	memset(cnt_b,0,sizeof(cnt_b));

	while(getline(cin,a) && getline(cin,b) ){
		for(int i=0;i<a.length();i++){
			cnt_a[a[i]]++;	
		}	
		for(int i=0;i<b.length();i++){
			cnt_b[b[i]]++;
		}
		for(int i=0;i<128;i++){
			int tmp_a=cnt_a[i];
			int tmp_b=cnt_b[i];
			char dog=i;
			for(int j=0;j<min(tmp_a,tmp_b);j++){
				cout<<dog;
			}
			
		}
		cout<<"\n";
	memset(cnt_a,0,sizeof(cnt_a));
	memset(cnt_b,0,sizeof(cnt_b));
		
	}
	return 0;
	
	
	
	
}
 

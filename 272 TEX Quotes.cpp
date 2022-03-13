#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
	
	string str;
	int status=1;
	while(getline(cin,str)){
		for(int i=0;i<str.length();i++){
			if(str[i]=='"'){
				if(status==1){
					status=2;
					cout<<"``";
				}
				else if(status==2){
					status=1;
					cout<<"''";
				}
			}
			else{
				cout<<str[i];
				
			}
		}
		cout<<'\n';
	}
	
	
}


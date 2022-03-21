#include<bits/stdc++.h>
using namespace std;
int nine(string);
string transform(int n);


int main(){
	string str;
	int degree;
	while(cin>>str){
		if(str.size()==1 && str=="0"){
			break;
		}
		else{
			degree=nine(str);
			if(degree){
				cout<<str<<" is a multiple of 9 and has 9-degree ";
				cout<<degree<<".\n";
			}
			else{
				cout<<str<<" is not a multiple of 9.\n";
			}
		}
	}
	return 0;
}

int nine(string str){
	if(str=="9" && str.size()==1){
		return 1;
	}	
	int degree=0;
	int is_nine=1;
	while(str.size()>=2){
		int sum=0;
		if(str=="9" && str.size()==1){
			degree+=1;
			break;
		}
		for(int i=0;i<str.size();i++){
			sum+=str[i]-'0';
		}
		
		if(sum%9==0){
			degree+=1;
		}
		else{
			break;
		}
		str=transform(sum);
		
	}
	return degree;
}

string transform(int n){
	deque<string> que;
	int owo;
	char owo2;
	string owo3;
	while(n){
		owo=n%10;
		owo2=owo+'0';
		owo3=owo2;
		que.push_back(owo3);
		n/=10;
	}
	string temp;
	while(que.size()){
		temp+=que.back();
		que.pop_back();
	}
	return temp;	
}







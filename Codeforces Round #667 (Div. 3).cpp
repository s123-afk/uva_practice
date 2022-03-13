#include<stdio.h>
#include<iostream>
using namespace std;
int sol(int a,int b){
	int dog=a-b;
	if(dog==0){
		return 0;
	}
	else if(dog%10!=0){
		dog/=10;
		dog+=1;
		return dog;
	}
	else{
		dog/=10;
		return dog;
	}
	
} 
int main(){
	int n;
	cin>>n;
	int a,b;
	while(cin>>a>>b){
		if(a<b){swap(a,b);}
		cout<<sol(a,b)<<'\n';
		
		
	}
	
	return 0;
	
}

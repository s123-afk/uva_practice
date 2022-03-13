#include<iostream>
#include<stdio.h>
using namespace std;
int checkdigit(long long dog){
	int digit=0;
	do{
		dog/=10;
		digit++;
	}while(dog!=0);
	return digit;
}

long long f(long long dog){
	
	long long digit_sum=0;
	do{
		digit_sum+=dog%10;
		dog/=10;
	}while(dog!=0);
	
	if(checkdigit(digit_sum)>1){
		return f(digit_sum);
	}
	else{
		return digit_sum;
	}
	
	
}

int main(){
	long long n;
	while(cin>>n){
		if(n==0){
			break;
		} 
		
		long long result=f(n);
		cout<<result<<'\n';
	}
	return 0;
	
	
	
	
}




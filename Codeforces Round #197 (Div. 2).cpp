#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

bool compare(int a,int b){
	return a<b;
}



int main(){
	vector<int> nums;
		
	char str[101];
	cin.getline(str,sizeof(str));
	for(int i=0;i<=strlen(str);i+=2){
		nums.push_back(str[i]-'0');	
	}
	std::sort(nums.begin(),nums.end(),compare);
	for(int i=0, j=0;i<=strlen(str);i+=2,j++){
		char abtrv=nums[j]+'0';
		str[i]=abtrv;
	}
	cout<<str;
	
}

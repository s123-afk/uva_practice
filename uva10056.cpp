#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	getchar();
	for(int j=0;j<n;j++){
		double N;
		double p;
		double i;
		cin>>N>>p>>i;
		
		printf("%.4f\n",(1/(1-pow(1-p,N)))*p*(pow(1-p,i-1)));
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a;
		getchar();
		cin>>b;
		if(!(a&1)){a++;}
		if(!(b&1)){b--;}
		int cardinality= (b-a)/2 +1;
		cout<<"Case "<<i+1<<": "<<cardinality*(b+a)/2<<"\n";
	}
	return 0;
	
	
	
	
	
	
	
}

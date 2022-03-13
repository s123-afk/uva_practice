#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	getchar();

	for(int i=0; i<n; i++) {
		int abtr_v;
		cin>>abtr_v;

		if(abtr_v==1 || abtr_v==2 ||abtr_v==3) {
			cout<<1<<'\n';
		} else if(abtr_v%2==1) {
			cout<<(abtr_v-1)/2<<'\n';
		} else {
			cout<<abtr_v/2<<'\n';
		}
	}




}

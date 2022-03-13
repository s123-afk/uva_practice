#include<bits/stdc++.h>
using namespace std;
void take_digit(vector<unsigned int>&v,unsigned int n){
	int i=0;
	while(n>0){
		v[i]=(n%10);
		n/=10;
		i++;
	}
}
unsigned int count_carry(vector<unsigned int> &v1,vector<unsigned int> &v2){
	int carry=0;unsigned int cnt_c=0;
	for(int i=0;i<10;i++){
		if(v1.at(i)+v2.at(i)+carry>=10){
			cnt_c+=1;
			carry=1;	
		}
		else{
			carry=0;
		} 
	}
	return cnt_c;
}   
int main()
{
	unsigned int a,b;
	while(cin>>a>>b){
		unsigned int cnt=0;
		vector<unsigned int> a_v(10);
		take_digit(a_v,a);
		
		vector<unsigned int> b_v(10);
		take_digit(b_v,b);
		
		if(a==0 && b==0){
			break;
		}
		cnt=count_carry(a_v,b_v);
		a_v.clear();b_v.clear();
		if(cnt==0){
			printf("No carry operation\n");
		}
		else{
			printf("%d carry operation\n",cnt);
		}
	}
	system("pause");
	return 0;
 }


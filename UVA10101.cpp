#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int cnt=1;
//	freopen("out-p10101.txt","w",stdout);
	while(cin>>s){
		int n=s.size()-1;
		int i=0;
		cout << setw(4) <<cnt<<".";
		
		while(i<n-2){
		switch((n-i)%7){
			case 0:
				cout<<s[i];
				i++;
				cout<< " kuti ";
				break;			
			case 6:
				cout<<s[i];
				i++;			break;
			case 5:
				cout<<s[i];
				cout<<" lakh ";
				i++;			break;
			case 4:
				cout<<s[i];
				i++;			break;
			case 3:
				cout<< s[i];
				cout<<" hajar ";
				i++;			break;
			case 2:
				cout<< s[i];
				cout<<" shata ";
				i++;			break;
			case 1:
				cout<< s[i];
				i++;			break;
		}
		}
		cnt++;
		cout<<s[n-2]<<" shata"<<" "<<s[n-1]<<s[n]<<'\n';
		
	}
	
	
	
}

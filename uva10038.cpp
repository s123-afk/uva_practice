#include<stdio.h>
#include<iostream> 
#include<stdbool.h>
#include<math.h>
#include<climits>
using namespace std;	

int main(){
	int times;
	while(cin>>times,!cin.eof()){
		bool dog[3003]={false};
		int n=times-1;
		if(times==1){
			cout<<"Jolly"<<endl;
//			cin.ignore(numeric_limits<std::streamsize>::max(),'/n');
//			cin.sync();
			cin.ignore(90000,'\n');
			continue;
		}
		
		int a[2]={0};
		cin>>a[times%2];
//		cout<<times;
		bool print_jolly=true;
		
		while(--times!=0){
			cin>>a[times%2];
			int diff=abs(a[0]-a[1]);	
			if(diff>n || diff<1){
				cout<<"Not jolly"<<endl; 
				print_jolly=false;
//				cin.sync();
//				cin.ignore(numeric_limits<std::streamsize>::max(),'/n');
				cin.ignore(90000,'\n');
				break;
			}
			else if(dog[diff]==true){
				cout<<"Not jolly"<<endl; 
				print_jolly=false;
//				cin.sync();
//				cin.ignore(numeric_limits<std::streamsize>::max(),'/n');
				cin.ignore(90000,'\n');
				break;
			}
			else if(dog[diff]==false){
				dog[diff]=true;
			}
		}
		if(print_jolly){
			cout<<"Jolly"<<endl;
		}
	}
	return 0;
	
	
	
}



#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int get_range(int v){
	while(!(v>=0 && v<7)){
		if(v>=7){
			v-=7;
		}
		else{
			v+=7;
		}
		
	}	
	return v;
}

int main(){
	int dates[13]={0};
	dates[1]=10;dates[2]=21;dates[3]=7;dates[4]=4;dates[5]=9;dates[6]=6;dates[7]=11;dates[8]=8;dates[9]=5;dates[10]=10;dates[11]=7;dates[12]=12;
	
	string weekday[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	
	int times;
	cin>>times;
	getchar();
	while(times--){
		int mon,date;
		cin>>mon>>date;
		int diff=date-dates[mon];
		int shifted_rs=get_range(diff);
		cout<<weekday[shifted_rs]<<'\n';
		
		
		
	}
	
	
	
}



 

//  1/10 2/21  3/7 4/4 5/9 6/6 7/11, 8/8,9/5,10/10 11/7 12/12 




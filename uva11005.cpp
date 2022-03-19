#include<iostream>
using namespace std;

int main(){
	int Case_times;
	cin>>Case_times;
	for(int i=0;i<Case_times;i++){
		cout<<"Case "<<i+1<<":\n"	;
		
		int bases[36];
		for(int j=0;j<36;j++){
			cin>>bases[j];
		}
		int times;
		cin>>times;


		for(int j=0;j<times;j++){
			int dog;
			cin>>dog;
			int min=0;
			int sums[38];
				
			for(int k=2;k<37;k++){
				int dog_temp=dog;
				int sum=0;
				int remainder;
				while(dog_temp){
					remainder=dog_temp%k;
					sum+=bases[remainder];
					dog_temp/=k;
				}
				sums[k]=sum;
				if(min==0||min>=sum){
					min=sum;
				}
			}
			
			printf("Cheapest base(s) for number %d:",dog);
			cout<<" ";
			for(int k=2;k<37;k++){
				if(min==sums[k]){	
					cout<<k<<" ";				
				}
			}
			cout<<"\n\n";
			
			
			
		}
		
	}
	
	
}

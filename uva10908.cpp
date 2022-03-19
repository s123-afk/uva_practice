#include<iostream>
#include<string> 
using namespace std;

int side_length(int x,int y,int len,int h,int w,char **shape ){
	char owo=shape[x][y];
	if(x<0 || x>w || y<0 || y>h){
		return 1;
	}
	int return_=0;
	for(int i=x-len;i<=x+len;i++){
		for(int j=y-len;j<=y+len;j++){
//			cout<<"i j"<<i<<" "<<j<<shape[i][j]<<"\n";
			if(owo!=shape[i][j]){
				return_=1;
				break;
				
			}
			else if(i<0 || i>=h || j<0 || j>=w){
				return_=1;
				break;
				
			}			
		}
		if(return_){
			break;
		}
//		cout<<"\n";
	}
	if(return_){
		return len;
	}
	
	side_length(x,y,len+1,h,w, shape);
}


int main()
	{
	int T;
	cin>>T;
	//次數，並且重複使用之真正程式部分 
	while(T--){
		int M,N,Q;
		cin>>M>>N>>Q;
		char rectan[M][N];
		cout<<M<<" "<<N<<" "<<Q<<"\n";
		char *owo[M];
		for(int i=0;i<M;i++){
			owo[i]=rectan[i];
		}
		for(int i=0;i<M;i++){	
			for(int j=0;j<N;j++){
				cin>>rectan[i][j];
				
			}
		}
		//開始輸入座標 
		for(int i=0;i<Q;i++){
			int x,y;
			cin>>x>>y;
			int res=side_length(x,y,1,M,N,owo);
			cout<<2*res-1<<"\n";	
		} 	
	}
	
	return 0;
	
	
}












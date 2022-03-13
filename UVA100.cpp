#include<bits/stdc++.h>
using namespace std;
int f(int n){
	int cnt=1;
	while(n!=1){
		if(n&1){
			n=3*n+1;	
			cnt++;
		}
		else{
			n=n/2;
			cnt++;
		}
	}
	return cnt;
}
int main() {
    int a, b;
    while (cin >> a >> b) {
        int ans = 0;
        cout << a << " " << b << " ";
        for (int i = min(a, b); i <= max(a, b); i++) {
            ans = max(f(i), ans);
        }
        cout << ans << endl;
    }
    return 0;
}

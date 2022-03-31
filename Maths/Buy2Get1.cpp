#include<iostream>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		int x , y;
		cin>>x>>y;
		int ans = 0;

		while(x != 1){
			ans += 2*y;
			x = x-2;
			//cout<<ans<<endl;
		}
		cout<<ans<<endl;
	}
	return 0;
}
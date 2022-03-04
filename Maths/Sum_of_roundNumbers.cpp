//https://codeforces.com/problemset/problem/1352/A

#include<iostream>
#include<vector>
using namespace std;
#define int long long int 

int32_t main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	vector<int>ans;

	while(t--){
		int n;
		cin>>n;
		
		int i = 1;

		while(n>0){
			if((n%10)>0){
				ans.push_back((n%10)*i);
			}
			n = n/10;
			i = i*10;
		}
	}
	cout<<ans.size();
	cout<<endl;
	for(auto x: ans){
		cout<<x<<" ";
	}
	return 0;
}
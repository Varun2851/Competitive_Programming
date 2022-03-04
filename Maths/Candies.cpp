//https://codeforces.com/problemset/problem/1335/A

#include<iostream>
using namespace std;
#define int long long int 

int32_t main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;

	while(t--){
		int candies;
		cin>>candies;

		cout<<(candies-1)/2<<endl;
	}

	return 0;
}

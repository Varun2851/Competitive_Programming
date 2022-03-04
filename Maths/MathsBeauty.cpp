// https://codeforces.com/problemset/problem/339/A
#include<bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin>>s;
	string ans = ""; // empty string

	int n = s.size(); // size of string

	for(int i = 0; i<n; i = i+2){
		ans.push_back(s[i]); 
	}

	sort(ans.begin(), ans.end()); 

	for(int i = 0; i<ans.size(); i++){
		if(i < ans.size()-1){
			cout<<ans[i] <<"+";
			
		}
		else if(i == ans.size()-1){
			cout<<ans[i];
			
		}
		
	}
	
	return 0;
}
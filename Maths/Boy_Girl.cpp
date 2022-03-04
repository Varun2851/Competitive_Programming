#include<bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s ;
	cin>>s;

	int cnt = 0;

	int freq[26] = {0}; // initialisation is must;

	for(int i = 0 ; i<s.size(); i++){
		freq[s[i] - 'a']++;
	}
	for(int i = 0; i<26; i++){
		if(freq[i] != 0 ){
			cnt++;
		}
	} 

	if(cnt%2 == 0){
		cout<<"CHAT WITH HER!";
	}
	else{
		cout<<"IGNORE HIM!";
	}


	return 0;
}
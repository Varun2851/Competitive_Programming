#include<iostream>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s;
	cin>>s;

	int a = 0; // store the count of Uppercase letter
	int b = 0; // store the count of lowercase letter

	for(int i = 0; i<s.size(); i++){
		if((s[i]>=65) and (s[i]<=95)){
			a++;
		}
		else if((s[i]>=97) and (s[i]<=122)){
			b++;
		}
	}

	for(int i = 0; i<s.size(); i++){
		if(a>b){
			if((s[i]>=97) and (s[i]<=122)){
				s[i] = s[i]-32;
			}
		}
		else{
			if((s[i]>=65) and (s[i]<=95)){
				s[i] = s[i]+32;
			}
		}

	}

	for(int i = 0; i<s.size(); i++){
		cout<<s[i];
	}
	return 0;
}
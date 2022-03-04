//https://www.codechef.com/LTIME104C/problems/LOCKDRAW

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
		int a,b,c;
		cin>>a>>b>>c;

		int largest = max(a,max(b,c));
		int c1 = a+b;
		int c2 = a+c;
		int c3 = b+c;

		if(largest == c1){
			cout<<"Yes"<<endl;
		}
		else if(largest == c2){
			cout<<"Yes"<<endl;
		}
		else if(largest == c3){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
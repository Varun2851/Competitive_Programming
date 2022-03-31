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
		int A,B,C;
		cin>>A>>B>>C;
		int sum = 0;

		int smallest = min(A,(B,C));

		 sum = A+B+C;
		int cost = sum - smallest;

		cout<<cost<<endl;
	}
	return 0;
}
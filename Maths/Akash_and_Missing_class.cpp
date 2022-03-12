#include<iostream>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		int a = 6;

		if(n<6){
			cout<<"0"<<end;
		}
		else if(n == 6){
			cout<<'1';
		}
		else{
			int m = n/a;
			cout<<a<<endl;
		}
	}
	return 0;
}
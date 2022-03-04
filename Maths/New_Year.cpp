//https://codeforces.com/problemset/problem/750/A

#include<iostream>
using namespace std;

int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
		int total_Question;
		cin>>total_Question;

		int k ;
		cin>>k;

		int total_timeHeHave = 4*60;

		int Remaining_time = total_timeHeHave-k;

		int count = 0;
		int time_forSolve = 0;
		for(int i = 1; i<=total_Question; i++){
			int solve = 5*i;
			time_forSolve += solve;
			if(Remaining_time >= time_forSolve){
				count++;
			} 
		}

		cout<<count<<endl;
	return 0;
}
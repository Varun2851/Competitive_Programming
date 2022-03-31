#include<iostream>
#include<algorithm>
using namespace  std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;

    while(t--){
        int N, X , Y;
        cin>>N>>X>>Y;

        string s;
        cin>>s;

        sort(s.begin(), s.end());

        if(s[0] == '1'  || s[N-1] == '0'){
            cout<<"0"<<endl;
        }
        else{
            cout<<min(X,Y)<<endl;
        }
    }

    return 0;
}
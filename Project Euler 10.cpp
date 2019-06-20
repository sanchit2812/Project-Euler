#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    bool prime[1000001];
    memset(prime,true,1000001);
    for(long long int p = 2;p*p<=1000000;p++){
        if(prime[p]==true){
            for(long long int j=p*p;j<=1000000;j+=p){
                prime[j] = false;
            }
        }
    }
    long int a[1000001]={0};
    a[0] = a[1] = 0;
    for(int i=2;i<=1000000;i++){
        if(prime[i] == true) a[i] = a[i-1] + i;
        else a[i] = a[i-1];
    }


    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}


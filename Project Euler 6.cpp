#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum = (n*(n+1))/2;
        ll sqsum = (n*(n+1)*(2*n+1))/6;
        cout<<sum*sum - sqsum<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;
    ll a = 1;
    ll b = 2;
    ll x = b;
    ll i = x;

    vector<ll> v;

    while(i<=40000000000000000){
        v.push_back(i);
        x = a + b;
        a = b;
        b = x;
        x = a + b;
        a = b;
        b = x;
        x = a + b;
        a = b;
        b = x;

        i = x;
    }

    while(t--){
        ll n;
        cin>>n;
        ll sum=0;
        for(i = 0;i<v.size();i++){
            if(v[i]<=n) sum += v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}

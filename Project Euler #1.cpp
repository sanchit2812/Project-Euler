#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=0;
        ll n1 =(n-1)/3;
        ll n2 = (n-1)/5;
        ll n3 = (n-1)/15;

        sum += (n1*(6 + (n1-1)*3))/2;
       // cout<<sum<<" ";
        sum += (n2*(10 +(n2-1)*5))/2;
        //cout<<sum<<" ";
        sum -= (n3*(30 +(n3-1)*15))/2;
        cout<<sum<<endl;
    }
    return 0;
}
 

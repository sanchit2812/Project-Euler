#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans = 0;
        
        while(n%2==0){
            ans = 2;
            n>>=1;
        }

        for(int i=3;i<=sqrt(n);i+=2){
            while(n%i==0){
                ans = i;
                n/=i;
            }
        }
        if(n>ans) cout<<n<<endl;
        else cout<<ans<<endl;

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long int pr =1, ans=0;
        for(int i=0;i<=n-k;i++){
            pr =1;
            for(int j=i;j<i+k;j++){
                pr = pr*(s[j]-'0');
            }
            ans = max(ans, pr);
        }
        cout<<ans<<endl;
    }
    return 0;
}

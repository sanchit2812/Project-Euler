#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,r=0;
    cin>>n;
    string s[n+1];
    for(int i=0;i<n;i++){
        cin>>s[i];
        reverse(s[i].begin(),s[i].end());
    }
    string ans="";
    
    for(int i=0;i<50;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            cnt = cnt + (s[j][i]-'0');
            cnt += r;
            r=0;
        }
        int mod = cnt%10;
        ans += '0' + mod;
        r = cnt/10;
       // cout<<i<<" "<<ans<<endl;
    }
    string st ="";
    while(r){
        ans += '0' + (r%10);
        r/=10;
    }
    reverse(ans.begin(), ans.end());
    for(int i=0;i<10;i++) st += ans[i];
    cout<<st<<endl;
    return 0;
}

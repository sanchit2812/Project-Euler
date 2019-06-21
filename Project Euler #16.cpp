#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    vector<int> ans;
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(4);
    ans.push_back(8);
    v.push_back(8);
    int r=0;
    for(int i=4;i<=10000;i++){
        r=0;
        for(int j=0;j<v.size();j++){
            int x = v[j]*2 + r;
            v[j] = x%10;
            r = x/10;
        }
        v.push_back(r);
        int sum=0;
        for(int j=0;j<v.size();j++) sum += v[j];
        ans.push_back(sum);
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}

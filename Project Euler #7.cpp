#include <bits/stdc++.h>
using namespace std;

void sieve(bool prime[], int n){
    for(int p=2;p*p<=n;p++){
        if(prime[p]==true){
            for(int i=p*p;i<=n;i+=p) prime[i] = false;
        }
    }
}

int main(){
    bool prime[200000];
    memset(prime,true,200000);
    sieve(prime,200000);

   
    int a[10005]={0},k=0;
    for(int i=2;i<=200000;i++){
        if(prime[i]==true){
            a[k++]  = i;
        }
        if(k==10001) break;
    }
  //  for(int i=0;i<100;i++) cout<<a[i]<<" ";


    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<a[n-1]<<endl;
    }
    return 0;
}


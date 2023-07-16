#include <bits/stdc++.h>

using namespace std;
#define int long long

vector<int> prime(int n){
    vector<bool> isPrime(n+1, true);
    for(int i=2; i<=sqrt(n); i++){
        if(isPrime[i]){
            for(int j=i*i; j<=n; j+=i){
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for(int i=2; i<=n; i++){
        if(isPrime[i]) primes.push_back(i);
    }

    return primes;
}

signed main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n; cin>>n;
    vector<int> primes = prime(n);
    for(auto it : primes) cout<<it<<" ";

    return 0;
}
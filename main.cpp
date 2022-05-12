#include <bits/stdc++.h>
//#include <atcoder/all>
# define  FAST()    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define IN()  freopen("Input,txt", "r", stdin);
#define OUT() freopen("Output.txt", "w", stdout) ;
#define f first

/*
                                  وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ
*/

using namespace std;
using ll = long long ;
using lld = long double ;
const int N = 1e9 , M = 1e9+7;
const double  ES = 1e-6;
using vi = vector<ll>;

//bitset<100>vis;


void solve() {
    ll a ,b,c,d,x=1;
    cin>>a>>b>>c>>d;
    x= (a%100)* (b%100)* (c%100)*(d%100);
    x%=100;
    if(x<10)cout<<0;
    cout<<x;
}


int main(){
    FAST();
    int t=1;
//    cin>>t;
    while (t--){
        solve();
//        cout<<"\n";
    }

    return 0;
}



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
const int N = 2e5+5 , M = 1e9+7;
const double  ES = 1e-6;
using vi = vector<ll>;

//bitset<100>vis;


void clear(){


}
void solve() {
    long double a,b,c,d;
    cin>>a>>b>>c>>d;
    b/=1e12;  // divide the powres and then get the pow 
    d/=1e12;
    if(pow(a,b)> pow(c,d))cout<<"YES";
    else cout<<"NO";
}

int main(){
    FAST();
    int t=1;
//     cin>>t;
    while (t--){
        clear();
        solve();
        cout<<"\n";
    }

    return 0;
}



//remember some similar problems
//try solving some (or multiple) specific cases and then try and generalize them
//tap your inner intuition
//get popular algorithms or methods that can apply to the problem
//  site to get the (OEIS®)

#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
//using namespace __gnu_pbds;

//typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int MAX_N = 1e5 + 5;
const int MAX_L = 20; // ~ Log N
const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 7;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;

//#define LSOne(S) (S & (-S))
//#define isBitSet(S, i) ((S >> i) & 1)

//Globals


void solve() {
    int n; cin >> n;

    if(n>5){
        cout << 1 << " " << 2 << " " << n-3;
    }else{
        cout << 0 << " " << 0 << " " << 0;
    }




}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("vasesin.txt", "r", stdin);
    freopen("vasesout.txt", "w", stdout);

    //Add tc if there are multiple solutions given in one file
    //int tc; cin >> tc;
    //for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
    solve();
    //}
    return 0;
}


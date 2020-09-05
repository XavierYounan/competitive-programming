#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int monks[n];

    for(int i=0; i<n; i++){
        int a; cin >> a;
        monks[i] = a;
    }



    sort(monks, monks+n);


    int total = 0;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("hirein.txt", "r", stdin);
    freopen("hireout.txt", "w", stdout);

    solve();

    return 0;
}


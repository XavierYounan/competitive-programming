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
int maximumLength = 0;
int c = 0;
int r = 0;


void flowDown(int y, int x, int len, int heightMap[]){

    int xx = x - 1;
    int yy = y - 1;

    int curHeight = heightMap[xx + yy * c];

    int otherHeight;
    bool hit = false;
    //left
    if(x > 0){
        otherHeight = heightMap[xx-1 + yy*c];

        if(otherHeight < curHeight){
            flowDown(y,x-1,len+1, heightMap);
            hit = true;
            //cout << "Hit left" << endl;
        }else{
            //cout << "left is bigger" << endl;
        }
    }

    //right
    if(x < c){
        otherHeight = heightMap[xx+1 + yy* c];
        if(otherHeight < curHeight){
            flowDown(y,x+1,len+1, heightMap);
            hit = true;
            //cout << "Hit right" << endl;
        }
    }
    //up
    if(y > 0){
        otherHeight = heightMap[xx + (yy-1) * c];
        if(otherHeight < curHeight){
            flowDown(y-1,x,len+1,heightMap);
            hit = true;
            //cout << "Hit up" << endl;

        }
    }
    //down
    if(y+1 < r){
        otherHeight = heightMap[xx + (yy+1) * c];
        if(otherHeight < curHeight){
            flowDown(y+1,x,len+1,heightMap);
            hit = true;
            //cout << "Hit down" << endl;
        }
    }

    if(hit == false){
        //cout << "No hit, length: " << len << endl;
        if(len> maximumLength){
            maximumLength = len;
            //cout << "new max length is: " << maximumLength << endl;
        }

    }else{
        //cout << "Hit, length: " << len << "\n";
    }
}

void solve() {
    int height;
    cin >> r >> c;

    int rowPos, colPos;
    cin >> rowPos >> colPos;

    int* heightMap = new int[r * c];

    for(int i=0; i< r*c; i++){
        cin >> height;
        heightMap[i] = height;
    }


    //cout << heightMap[(colPos-1) + (rowPos-1) * c] << "\n";
    flowDown(rowPos,colPos, 0, heightMap);
    cout << maximumLength + 1;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("atlanin.txt", "r", stdin);
    freopen("atlanout.txt", "w", stdout);

    //Add tc if there are multiple solutions given in one file
    //int tc; cin >> tc;
    //for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t  << ": ";
    solve(); //Tab this in if multiple
    //}
    return 0;
}





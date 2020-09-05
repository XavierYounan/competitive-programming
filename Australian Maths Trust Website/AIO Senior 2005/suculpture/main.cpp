
#include <bits/stdc++.h>

using namespace std;



int n;
int total = 0;
bool leaf[50005];
int lb[50005][2];
int rb[50005][2];

int a,x,b,y;

int dfs(int v){
    if(leaf[v]) return 0;

    int leftHeight = dfs(lb[v][0]) + lb[v][1];
    int rightHeight = dfs(rb[v][0]) + rb[v][1];

    total += max(leftHeight,rightHeight) - min(leftHeight,rightHeight);
    //  total += abs(leftHeight - rightHeight);

    return max(leftHeight,rightHeight);

}



int main()
{




    ifstream inputFile("sculpin.txt");
    ofstream outputFile("sculpout.txt");


    inputFile >> n;

    for(int i=1; i<=n; i++){
        inputFile >> a >> x >> b >> y;

        if(a == x && x == b && b == y && y==0){
            leaf[i] = true;
            continue;
        }

        leaf[i] = false;
        lb[i][0] = a;
        lb[i][1] = x;

        rb[i][0] = b;
        rb[i][1] = y;
    }

    dfs(1);

    outputFile << total ;
    outputFile.close();
    return 0;
}

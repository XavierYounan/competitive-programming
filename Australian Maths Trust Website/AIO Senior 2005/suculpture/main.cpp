#include <bits/stdc++.h>

using namespace std;

/*
void dfs(int s, int e){
    for(auto u: adj[s]){
        if(u!=e) dfs(u,s)
    }
}
*/

int main()
{
    ifstream inputFile("sculpin.txt");
    ofstream outputFile("sculpout.txt");


    int n;
    inputFile >> n;


    int apple[n+1][6] = {{0,0,0,0,-1,0}};
    int tier[n] = {0};
    int maxTier = 0;


    int a,x,b,y;

    //Process
    for(int i = 1; i<n+1; i++){


        inputFile >> a >> x >> b >> y;

        apple[i][0] = a;
        apple[i][1] = x;
        apple[i][2] = b;
        apple[i][3] = y;
        //cout << "Height is: " << apple[i][4] << endl;
        if( a!= 0){
            apple[a][4] = i;
            apple[a][5] = x;



            tier[a] = tier[i] + 1;
            tier[b] = tier[i] + 1;

            maxTier = max(maxTier, tier[a]);
            maxTier = max(maxTier, tier[b]);

            apple[b][4] = i;
            apple[b][5] = y;


        }
    }


    int maxHeight = 0;
    int heights[n] = {0};
    int subBranchId, height;

    for(int i=1; i<=n; i++){
        subBranchId = apple[i][4];
        height = apple[i][5];


        while(subBranchId != -1){
            height += apple[subBranchId][5];
            subBranchId= apple[subBranchId][4];
        }

        heights[i] = height;
        maxHeight = maxHeight>height ? maxHeight : height;
    }


    int growAmount[n+1] = {0};




    cout << "Method 1" << endl;
    for(int i=maxTier; i>=0; i--){
        for(int j=1; j<n+1; j++){
            if(tier[j] == i){
                cout << "Apple is: " << j << " Tier: " << i << endl;
                if(apple[j][0] == 0){
                    growAmount[j] += maxHeight - heights[j];

                }else{

                    growAmount[j] += min(growAmount[apple[j][0]], growAmount[apple[j][2]]);

                    growAmount[apple[j][0]] -= growAmount[j];
                    growAmount[apple[j][2]] -= growAmount[j];
                }
            }
        }
    }


    int totalGrow = 0;
    for(int i=1; i<=n; i++){
        totalGrow += growAmount[i];

    }


    outputFile << totalGrow ;
    outputFile.close();
    return 0;
}


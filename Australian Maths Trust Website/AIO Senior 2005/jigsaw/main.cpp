#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream inputFile("jigin.txt");
    ofstream outputFile("jigout.txt");

    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int> pi;

    int n;
    int totalMatches = 0;
    inputFile >> n;

    int jigSaw[n][2] = {{0,0}};
    int x,y;

    int sumx = 0;
    int sumy = 0;

    for(int i=0; i<n; i++){
        inputFile >> x >> y;
        jigSaw[i][0] = x;
        sumx += x;
        jigSaw[i][1] = y;
        sumy+= y;

    }


    int meanx = sumx/n;
    int meany = sumx/n;

    //Translations
    //X
    bool canX = true;
    int jigSawx[n][2] = {{0,0}};
    int newX;
    bool hit;


    for(int i=0; i<n; i++){
        if(jigSaw[n][0] > meanx){
            //Find opposite
            newX = 2 * meanx - jigSaw[n][0];
            hit = false;
            for(int j=0; j<n; j++){
                if(jigSaw[j][0] == newX && jigSaw[j][1] == jigSaw[n][1]){
                    hit = true;
                    jigSawx[n][0] = newX;
                    jigSawx[n][1] = jigSaw[n][1];

                    jigSawx[j][0] = jigSaw[n][0];
                    jigSawx[j][1] = jigSaw[n][1];
                }

            }

            if(hit = false){
                canX = false;
                break;
            }
        }
    }




    //outputFile << ;
    outputFile.close();
    return 0;
}


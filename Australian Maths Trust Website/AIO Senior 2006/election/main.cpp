#include <bits/stdc++.h>

using namespace std;

//Globals

int main()
{
    freopen("elecin.txt", "r", stdin);
    freopen("elecout.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int w,r;
    cin >> w >> r;

    int n;
    cin >> n;

    int rectangles[n][4];
    int x,y,wi,hi;

    for(int i=0; i<n; i++){
        cin >> x >> y >> wi >> hi;
        rectangles[i][0] = x;
        rectangles[i][1] = y;
        rectangles[i][2] = x+wi;
        rectangles[i][3] = y+hi;
    }

    for(int i=0; i<n; i++){
        //left face
        rectangles[i][0];

        //right face
        rectangles[i][2];

        //up face
        rectangles[i][3];

        //down face
        rectangles[i][1];
    }


    //cout <<

    return 0;
}







#include <bits/stdc++.h>
#include <fstream>

using namespace std;


//Define a global
int loo = 1;

int main()
{
    //ifstream inputFile("spiesin.txt");
    //ofstream outputFile("spiesout.txt");

    freopen("spiesin.txt", "r", stdin);
    freopen("spiesout.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int> pi;

    int n;
    int totalMins = 0;
    cin >> n;


    int start, finish;

    int jean[n][2];

    for(int i=0; i<n; i++){
        cin >> start >> finish;
        jean[i][0] = start;
        jean[i][1] = finish;
    }

    int g;
    cin >> g;


    int maxL, minR;
    int diff;



    for(int i=0; i<g; i++){

        cin >> start >> finish;
        //cout << "ITERATION: " << i << endl;
        for(int j=0; j<n; j++){

            //cout <<"Sub iter: " << j << endl;
            //cout << "Start: " << start << " Finish: " << finish << endl;
            //cout << "Jean start: " << jean[j][0] << " Jean finish: " << jean[j][1] << endl;

            if(finish < jean[j][0]){
                break;
            }

            maxL = max(start, jean[j][0]);
            minR = min(finish, jean[j][1]);


            //cout << "MaxL " << maxL << endl;
            //cout << "MinR " << minR << endl;



            diff = minR - maxL;
            //cout << "Diff " << diff << endl;

            if(diff > 0){
                //cout << "Diff is: " << diff << endl;
                totalMins += diff;

            }
        //cout << endl;

        }
        //cout << endl;
    }

    //cout << totalMins;

    cout << totalMins;

    return 0;
}


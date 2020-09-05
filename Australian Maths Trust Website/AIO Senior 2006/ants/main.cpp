#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream inputFile("antsin.txt");
    ofstream outputFile("antsout.txt");

    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int> pi;

    int d;
    inputFile >> d;

    int cur;

    int num = 0;
    int last = 0;

    int cnt = -1;



    for(int i=0; i<d; i++){
        inputFile >> cur;

        //cout << "Current number is: " << cur << endl;
        if(cur > last){
            //cout << "Bigger" << endl;
            cnt ++;
            //cout << "Current is bigget than last" << " cur: " << cur << " last: " << last << endl;

        }else{
            //cout << "Not bigger" << endl;
            if(cnt > 0){
                //cout << "Cout greater than 0: " << cnt << endl;
                num++;
            }
            cnt = 0;

        }

        last = cur;

    }

    if(cnt > 0){
        num++;
    }

    outputFile << num;

    //outputFile << num ;
    outputFile.close();
    return 0;
}


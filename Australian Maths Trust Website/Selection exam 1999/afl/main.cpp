#include <bits/stdc++.h>

using namespace std;


int main()
{
    ifstream inputFile("aflin.txt");
    ofstream outputFile("aflout.txt");

    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int> pi;


    int n;
    inputFile >> n ;

    int seats[n] = {0};

    int t,s;
    inputFile >> t;

    vector<vector<int>> emptySeats;

    int curSeat = 0;
    int diff;

    for(int i=0; i<t; i++){

        inputFile >> s;
        s -=1;
        seats[s] = 1;

        if(s>curSeat){
            diff = s - curSeat;

            //{curr seat, diff)
            emptySeats.push_back({curSeat,diff});
            curSeat = s+1;
        }

    }

    diff = n - curSeat;
    emptySeats.push_back({curSeat,diff});


    /*
    //Debug
    for (int i = 0; i < emptySeats.size(); i++){
        for(int j=0; j<2; j++){
            cout << emptySeats[i][j] << " ";
        }
        cout << endl;
    }
    */



    int b;
    inputFile >> b;


    int id,ma;

    for(int i=0; i<b; i++){

        /*
        cout << "Iter: " << i << endl;
        //Debug
        for (int i = 0; i < emptySeats.size(); i++){
            for(int j=0; j<2; j++){
                cout << emptySeats[i][j] << " ";
            }
            cout << endl;
        }
        */


        inputFile >> s;
        //cout << "Booking size: " << s << endl;

        ma = 0;
        //Get max
        for (int i = 0; i < emptySeats.size(); i++){
            if(emptySeats[i][1] > ma){
                //cout << "Ma: " << ma << " is less than: " << emptySeats[i][1] << " Id now is: " << emptySeats[i][0] << endl;
                id = i;
                ma = emptySeats[i][1];

            }


        }






        outputFile << emptySeats[id][0] + 1 << endl;

        emptySeats[id][1] -= s;
        emptySeats[id][0] += s;


    }



    //outputFile << ;
    outputFile.close();
    return 0;
}


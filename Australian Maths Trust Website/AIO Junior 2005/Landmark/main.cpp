#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream inputFile("landin.txt");
    ofstream outputFile("landout.txt");

    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int> pi;

    int r,c;
    inputFile >> r >> c;

    int city[r][c] = {0};

    string row = "";

    for(int i=0; i<r; i++){
        inputFile >> row;
        for(int j=0; j<c; j++){
            city[i][j] = row[j];
            cout << row[j] << " ";
        }
        cout << endl;

    }


    //outputFile << ;
    outputFile.close();
    return 0;
}


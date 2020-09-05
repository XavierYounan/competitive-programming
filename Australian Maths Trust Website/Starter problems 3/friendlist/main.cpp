#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    ifstream inputFile("listin.txt");
    ofstream outputFile("listout.txt");

    int f;
    inputFile >> f;


    int a,b;

    int friendCount[1001] = {};




    for(int i=0; i<f; i++){
        inputFile >> a >> b;
        friendCount[a]++;
        friendCount[b]++;

    }


    int maxId[1001] = {};
    int maximum;

    maximum = *max_element(friendCount, friendCount+1001);

    for(int j=0; j<1001; j++){
        if(friendCount[j] == maximum){
            outputFile << j << endl;
        }
    }

    outputFile.close();
    return 0;
}


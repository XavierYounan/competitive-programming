#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile("encyin.txt");
    ofstream outputFile("encyout.txt");

    int n,q;
    inputFile >> n >> q;

    int enc[n];
    int i=0;
    int entry;

    while(n--){
        inputFile >> entry;
        enc[i] = entry;
        i++;
    }

    while(q--){
        inputFile >> entry;
        outputFile << enc[entry-1] << endl;;
    }

    outputFile.close();
    return 0;
}


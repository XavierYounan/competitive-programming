#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile("rainin.txt");
    ofstream outputFile("rainout.txt");


    int n, c, r, i;

    inputFile >> n >> c;
    i=0;

    while(n--){
        i++;
        inputFile >> r;
        c -= r;

        if(c<=0){
            outputFile << i;
            outputFile.close();
            return 0;
        }
    }
}


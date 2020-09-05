#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream inputFile("mixin.txt");
    ofstream outputFile("mixout.txt");

    int n, d, i, r;


    inputFile >> n >> d;

    i = floor(n/d);

    r = n - i * d;


    outputFile << i;

    if(r!=0){
        outputFile << " " << r << "/" << d;
    }
    outputFile.close();
    return 0;
}


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile("countin.txt");
    ofstream outputFile("countout.txt");

    int n;
    inputFile >> n;

    for(int i = 1; i<=n; i++){
        outputFile << i << endl;
    }

    outputFile.close();
    return 0;
}


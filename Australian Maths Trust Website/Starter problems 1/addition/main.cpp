#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile("addin.txt");
    ofstream outputFile("addout.txt");

    long a, b, c;


    inputFile >> a >> b;

    c = a + b;


    outputFile << c;
    outputFile.close();
    return 0;
}


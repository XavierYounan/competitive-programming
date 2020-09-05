#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile("taktakin.txt");
    ofstream outputFile("taktakout.txt");

    int fruits;
    inputFile >> fruits;

    int numberMonths = 0;
    int remainder = fruits % 11;

    while(remainder != 1){
        numberMonths ++;
        fruits *= 2;
        remainder = fruits % 11;
    }

    outputFile << numberMonths << " " << fruits;
    outputFile.close();
    return 0;
}


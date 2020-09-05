#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream inputFile("dictin.txt");
    ofstream outputFile("dictout.txt");

    int d,w;

    inputFile >> d >> w;

    map<int, int> dict;

    int inter, whole;


    while(d--){
        inputFile >> inter >> whole;
        dict.insert(pair<int,int>(inter,whole));
    }

    int trans;

    while(w--){
        inputFile >> inter;
        trans = dict[inter];
        if(trans == 0){
            outputFile << "C?" << endl;
        }else{
            outputFile << trans << endl;
        }
    }


    outputFile.close();
    return 0;
}


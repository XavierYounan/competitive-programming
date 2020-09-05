#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile("tripin.txt");
    ofstream outputFile("tripout.txt");

    int n, entry;
    inputFile >> n;

    int pos[n];
    int num;

    for(int i = 0; i<n; i++){
        inputFile >> entry;

        if(entry%3 ==0){
            pos[num] = i+1;
            num++;
        }
    }

    if(num ==0){
        outputFile << "Nothing here!";
    }else{
        outputFile << num << endl;

        for(int i=0; i<num; i++){
            if(i!= 0){
                outputFile << " ";
            }
            outputFile << pos[i];
        }
    }


    outputFile.close();
    return 0;
}


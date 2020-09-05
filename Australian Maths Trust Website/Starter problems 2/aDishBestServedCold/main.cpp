#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile("dishin.txt");
    ofstream outputFile("dishout.txt");

    int n,a;
    int mi, ma, me;

    inputFile >> n;
    int arr[n];

    for(int i=0; i<n; i++){

        inputFile >> a;

        if(a>ma){
            ma = a;
        }
        if(a<mi || i==0){
            mi = a;
        }

        me += a;
    }
    me /= n;

    outputFile << mi << " " << ma << " " << me << endl;
    outputFile.close();
    return 0;
}


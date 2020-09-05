#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream inputFile("cutein.txt");
    ofstream outputFile("cuteout.txt");

    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int> pi;

    int n;
    inputFile >> n ;

    int cute = 0;
    int num;

    for(int i=0; i<n; i++){
        inputFile >> num;

        if(num==0){
            cute++;
        }else{
            cute = 0;
        }
    }

    outputFile << cute ;
    outputFile.close();
    return 0;
}


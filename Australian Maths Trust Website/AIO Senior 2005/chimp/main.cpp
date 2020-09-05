#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream inputFile("chimpin.txt");
    ofstream outputFile("chimpout.txt");

    int x,y;

    inputFile >> x >> y;


    int cube = max(abs(x), abs(y));

    cout << "cube is: " << cube << endl;;

    int square;
    int page;
    int transX, transY;

    if(y == -cube || x == -cube){
        cout << "Bottom left" << endl;
        if(cube == 0){
            square == 0;
            outputFile << 0;
        }else{
            square = 2 * cube;
            square *= square;

            transX = x+cube;
            transY = -y + cube;

            cout << "Trans X: " << transX << endl;
            cout << "Trans Y: " << transY << endl;

            page = square + transY + transX;

            cout << "Page is:  " << page << endl;
            outputFile << page;

        }
    }else{
        cout << "top right" << endl;

        square = 2 * cube - 1;
        square *= square;

        transX = -x + cube;
        transY = y +cube -1;

        cout << "Trans X: " << transX << endl;
        cout << "Trans Y: " << transY << endl;

        page = square + transY + transX;

        cout << "Page is:  " << page << endl;
        outputFile << page;

    }



    //outputFile << ;
    outputFile.close();
    return 0;
}

